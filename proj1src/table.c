#include <stdio.h>

#include "token.h"
#include "table.h"

int      lastIndex = 0; /* End of the string table, empty */

extern int yyleng;
extern int yylval;


void init_hash_tbl()  /* Initialize hash table */
{
   int i;

   for( i=0; i<TBL_LEN; i++ )
   {
     hash_tbl[i] = NULL;
   }
}

void init_string_tbl()
{
   int i;
   for ( i=0; i<STRTBL_LEN; i++ )
      strg_tbl[i] = 0;
}

void prt_hash_tbl()
{
   int i;
   struct hash_ele *p;

   printf("TokenID\tTokenLen\tIndex\tNext...\n");
   for( i=0; i<TBL_LEN; i++ )
   {
     p = hash_tbl[i];
     while ( p != NULL )
     {
       printf("%d\t%d\t%d\t\t", p->id, p->len, p->index);
       p = p->next;
     }
     printf("\n");
   }
}

void prt_string_tbl()
{
   int i;

   for( i=0; i<lastIndex; i++ )
   {
     if( strg_tbl[i] == -1 )
       printf(" ");
     else
      printf("%c", strg_tbl[i]);
   }
   printf("\n");
}

int hashpjw( char *s, int l)      /* compute hash value for string in yytext 
                                      taken from book Pg. 436 */
{
   int  i;
   char *p;
   unsigned h=0, g;

   for(i=0, p=s; i<l ; p=p+1, i++)
   {
     h = ( h<<4 ) + (*p);
     if ( (g=h&0xf0000000) )
     {
        h = h^(g>>24);
        h = h^g;
     }
   }
   return h%TBL_LEN;
}

int strl(char * text) {
   int i;
   for(i = 0; text[i] != '\0'; ++i);
   return i;
}

void string_table_insert(char * text, int slen) {
   printf("string table insert, string = %s", text);
   // string table insert
   for(int i = 0; i < slen; i++) {
      // insert characters into string table, range lastIndex..<lastIndex+strl-1
      strg_tbl[lastIndex + i] = text[i];
   }
   lastIndex = lastIndex + slen; // updating lastIndex (end index of strg_tbl)
   strg_tbl[lastIndex++] = STR_SPRTR; // inserting string seperator at end, increment lastIndex
}

void hash_table_insert(char * text, int slen, int tokenid, int hashIndex) {
   printf("hash table insert, tokenid = %d", tokenid);
   hash_ele * current;
   current->id = tokenid;
   current->len = slen;
   current->index = lastIndex;

   // string table insert
   string_table_insert(text, slen);

   current->next = hash_tbl[hashIndex]; // current is now head node

   // hash table insert
   hash_tbl[hashIndex] = current;

}

void install_id(char* text, int tokenid) /* insert an id/string into hash table , set yylval */
{
   int slen = strl(text);
   int hashIndex = hashpjw(text, slen);

   if (hash_tbl[hashIndex] != NULL) {
      // not an empty hash_tbl index
      
      // check to see if any hash_ele in hash_tbl[hashIndex] match
      hash_ele * temp = hash_tbl[hashIndex];

      if (temp->id == tokenid) {
         // id/string already exists, update yylval and return
         yylval = temp->index;
         return;
      }

      while (hash_tbl[hashIndex]->next != NULL) {
         // get next hash_ele 
         temp = temp->next;

         if (temp->id == tokenid) {
            // id/string already exists, update yylval and return
            yylval = temp->index;
            return;
         }

      }

      // no match in any hash_ele in hash_tbl[hashIndex]
      // insert id/string, update yylval, and return
      hash_table_insert(text, slen, tokenid, hashIndex);
      yylval = hash_tbl[hashIndex]->index;
      return;

   } else {
      // an empty hash_tbl index
      // insert id/string, update yylval, and return
      hash_table_insert(text, slen, tokenid, hashIndex);
      yylval = hash_tbl[hashIndex]->index;
      return;

   }

}


     
