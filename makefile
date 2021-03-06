all:  trabalho
	@echo ____________________________________________________________________Cria
	@./trabalho < files/5.funfa  > files/5.c
	@./trabalho < files/4.funfa  > files/4.c
	@./trabalho < files/3.funfa  > files/3.c
	@./trabalho < files/2.funfa  > files/2.c
	@./trabalho < files/1.funfa  > files/1.c
	@echo ____________________________________________________________________compila
	g++ files/5.c -o PROG5
	g++ files/4.c -o PROG4
	g++ files/3.c -o PROG3
	g++ files/2.c -o PROG2
	g++ files/1.c -o PROG1
	@echo ____________________________________________________________________Executa
	@echo __________________________________________PROG1
	@./PROG1
	@echo __________________________________________PROG2
	@./PROG2
	@echo __________________________________________PROG3
	@./PROG3
	@echo __________________________________________PROG4
	@./PROG4
	@echo __________________________________________PROG5
	@./PROG5

entrada: trabalho
	@echo ____________________________________________________________________Cria
	@./trabalho < entrada.cc 
	@./trabalho < entrada.cc > saida.c
	@echo ____________________________________________________________________compila
	cat saida.c
	@echo ------------
	g++ saida.c 
	@echo ____________________________________________________________________Executa
	@./a.out
 	
lex.yy.c: trabalho.lex
	@echo ____________________________________________________________________1/4
	flex trabalho.lex

y.tab.c: trabalho.y
	@echo ____________________________________________________________________2/4
	yacc trabalho.y

trabalho: lex.yy.c y.tab.c
	@echo ____________________________________________________________________3/4
	g++ -o trabalho y.tab.c -lfl

clean: 
	rm y.tab.c
	rm lex.yy.c
	rm trabalho
	rm a.out 
	rm PROG*
	rm saida.c



	
