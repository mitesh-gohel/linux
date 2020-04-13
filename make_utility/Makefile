all: main_pro_obj_file sum_obj_file sub_obj_file mul_obj_file div_obj_file
	echo "hello"
	gcc main_pro.o sum.o sub.o mul.o div.o -o output_file

main_pro_obj_file:
	gcc -c main_pro.c -o main_pro.o	

sum_obj_file:
	gcc -c sum.c -o sum.o

sub_obj_file:
	gcc -c sub.c -o sub.o

mul_obj_file:
	gcc -c mul.c -o mul.o

div_obj_file:
	gcc -c div.c -o div.o
