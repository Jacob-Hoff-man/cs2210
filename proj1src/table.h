#define TBL_LEN    11        /* Hash table length */
#define STRTBL_LEN 3001      /* String table length */
#define STR_SPRTR  -1        /* String seperator in string table */

typedef struct hash_ele{
       int id;        /* token ID: ICONSTnum or IDnum */
       int len;       /* token length */
       int index;     /* string table index */
       struct hash_ele * next;/*over flow pointer*/
} hash_ele;

hash_ele * hash_tbl[TBL_LEN];      /* Hash table of length TBL_LEN */
char     strg_tbl[STRTBL_LEN];   /* String table of length STRTBL_LEN */

// table.c methods
extern int strl(char * text); /* install_id() helper */
extern void string_table_insert(char * text, int slen); /* install_id() helper */
extern void hash_table_insert(char * text, int slen, int tokenid, int hashIndex); /* install_id() helper */
extern void install_id(); /* install string constants & identifiers into string tbl */