#ifndef _table_h_
#define _table_h_

#define TBL_LEN    11        /* Hash table length */
#define STRTBL_LEN 3001      /* String table length */
#define STR_SPRTR  -1        /* String seperator in string table */

/* macros */
/* install_id helper sets i to length of string text */
#define STRLEN(i, text) for( i = 0; text[i] != '\0'; ++i)

/* updateyytextWithSpecialChar helper that determines the new char for individual indices in newjchrp */
#define INSERT_SPECIAL_CHAR(iint, jint, newjchrp, yytextchrp, casechr) ((iint == jint) ?\
(newjchrp[jint] = casechr) : (iint < jint) ?\
(newjchrp[jint] = yytextchrp[jint + 1]) : (newjchrp[jint] = yytextchrp[jint]))   

typedef struct hash_ele{
       int id;        /* token ID: ICONSTnum or IDnum */
       int len;       /* token length */
       int index;     /* string table index */
       struct hash_ele * next;/*over flow pointer*/
} hash_ele;

hash_ele * hash_tbl[TBL_LEN];      /* Hash table of length TBL_LEN */
char     strg_tbl[STRTBL_LEN];   /* String table of length STRTBL_LEN */

/* table.c methods */
 void string_table_insert(char * text, int slen); /* install_id helper */
 void hash_table_insert(char * text, int slen, int tokenid, int hashIndex); /* install_id helper */
 void install_id(); /* install string constants & identifiers into string tbl */ 

#endif