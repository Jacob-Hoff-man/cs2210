parser:   y.tab.c lex.yy.c proj2.c
	gcc  -g -o parser y.tab.c proj2.c -lfl
y.tab.c:  grammar.y
	yacc -v grammar.y
lex.yy.c: lex.l 
	flex lex.l
clean:
	rm -rf lex.yy.o lex.yy.c y.tab.c y.tab.o y.output proj2.o table.o parserdrv.o go 