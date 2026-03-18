#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int *ptr;
	int x;
	
	x = 10;
	ptr = &x;
	x = 20;
	*ptr = 30;
	
	printf("x: %d \n", x);
	printf("x: %p \n", &x);
	printf("ptr: %p", ptr);
	
	return 0;
}
