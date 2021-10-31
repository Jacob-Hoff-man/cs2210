#include <stdio.h>
#include <stdlib.h>

extern int yyparse();
int yycolumn, yyline, yyleng;
/* pointer to the matched string, NULL terminated */
extern char * yytext;
/* input file for lex, defaults to stdin */
extern void * yyin;
FILE * treelst;

int main(int argc, char * argv[]) {
    if (argc == 2) {
      /* file input with command-line argument */
      yyin = fopen(argv[1], "r");
      if (!yyin) {
        printf("invalid command-line input for parserdrv.c main function.\n");
        printf("[filename: %s] could not be opened.\n", argv[1]);
        printf("usage: \n\t./proj2src/parser\n\t./pro21src/parser input.txt\n");
        return(1);
      }
    } else if (argc == 1) {
      /* no file input */
      /* yyin = NULL, yylex() implicitly sets stdin as input */
        printf("invalid command-line input for parserdrv.c main function.\n");
        printf("parserdrv.c main function does not currently support stdin as input.\n");
        printf("usage: \n\t./proj2src/parser\n\t./pro21src/parser input.txt\n");
        return(1);

    } else {
        /* invalid file input */
        printf("invalid command-line input for parserdrv.c main function.\n");
        printf("usage: \n\t./proj2src/parser\n\t./pro21src/parser input.txt\n");
        return(1);
    }

    yyline = 1;
    yycolumn = 0;
    yyparse();
    return(0);


}