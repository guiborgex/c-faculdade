#include <stdio.h>
#include <stdlib.h>

void incrementa(int *p){
	(*p)++;
}

int main(int argc, char *argv[]) {
	
	int numero = 5;
	char resp;
	
	incrementa(&numero);
	
	printf("Valor incrementado: %d\n", numero);	
	
	printf("Quer incrementar novamente(S/N)? \n");
	scanf(" %c", &resp);
	
	while (resp == 's' || resp == 'S') {

	incrementa(&numero);
	printf("Valor incrementado: %d\n", numero);

	printf("Quer incrementar novamente(S/N)? \n");
	scanf(" %c", &resp);
	

	
	} 
	

	
	return 0;
}
