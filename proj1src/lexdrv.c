#include <stdio.h>
#include "token.h"

extern  int yylex();
extern  void prt_hash_tbl();
extern  void prt_string_tbl();
extern  void init_hash_tbl();
extern  void init_string_tbl();

int yyline, yycolumn, yylval;

FILE * yyin;

int main(int argc, char *argv[])
{
  int lexrtn;
  char* tokenid[40]={"EOFnum", "ANDnum", "ASSGNnum", 
                     "DECLARATIONSnum", "DOTnum", "ENDDECLARATIONSnum",
                     "EQUALnum", "GTnum", "IDnum", "INTnum", "LBRACnum",
                     "LPARENnum", "METHODnum", "NEnum", "ORnum", "PROGRAMnum",
                     "RBRACnum", "RPARENnum", "SEMInum", "VALnum", "WHILEnum",
                     "CLASSnum", "COMMAnum", "DIVIDEnum", "ELSEnum", "EQnum",
                     "GEnum", "ICONSTnum", "IFnum", "LBRACEnum", "LEnum", "LTnum",
                     "MINUSnum", "NOTnum", "PLUSnum", "RBRACEnum", "RETURNnum",
                     "SCONSTnum", "TIMESnum", "VOIDnum" };

  init_hash_tbl();
  init_string_tbl();
  yyline = 1;  yycolumn = 0;

  if (argc == 2) {
      /* file input with command-line argument */
      yyin = fopen(argv[1], "r");
      if (!yyin) {
        printf("invalid command-line input for lexdrv.c main function.\n");
        printf("%s could not be opened.\n", argv[1]);
        return(1);
      }

  } else if (argc == 1) {
      /* no file input */
      /* yyin = NULL, yylex() implicitly sets stdin as input */

  } else {
    /* invalid file input */
    printf("invalid command-line input for lexdrv.c main function.\n");
    printf("usage: \n\t./proj1src/go\n\t./proj1src/go input.txt\n");
    return(1);
  }

  printf("Line\tColumn\t%-16s\tyylval\n", "Token");
  while( 1 )
    {
      switch ( lexrtn = yylex() ){
      default:        printf("%d\t%d\t%-16s\n",yyline,yycolumn, tokenid[lexrtn - 256]); break;
      case ICONSTnum: printf("%d\t%d\t%-16s\t%d\n",yyline,yycolumn, tokenid[lexrtn - 256], yylval);
                      break;
      case SCONSTnum:
      case IDnum:     printf("%d\t%d\t%-16s\t%d\n",yyline,yycolumn, tokenid[lexrtn - 256], yylval); 
                      break;
      case 0:         printf("%d\t%d\t%-16s\n",yyline,yycolumn, tokenid[0]);  /* end of file incurred */
                      printf("\nHash Table :\n");
                      prt_hash_tbl();  
                      printf("\nString Table :\n");
                      prt_string_tbl();
                      if (argc == 1) fclose(yyin);
                      return(0);
      }
    }


}
