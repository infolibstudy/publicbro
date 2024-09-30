all:menu
menu:menu.o index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o 
	gcc -o menu menu.o index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o
menu.o: menu.c index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o
	gcc -c menu.c
index_first_zero.o:index_first_zero.c index_first_zero.h
	gcc -c index_first_zero.c
index_last_zero.o: index_last_zero.c index_last_zero.h
	gcc -c index_last_zero.c
sum_between.o: sum_between.c sum_between.h index_first_zero.o index_last_zero.o
	gcc -c sum_between.c
sum_before_and_after.o: sum_before_and_after.c sum_before_and_after.h index_first_zero.o index_last_zero.o
	gcc -c sum_before_and_after.c