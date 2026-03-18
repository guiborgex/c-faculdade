#include <stdio.h>
#include <stdlib.h>

float cMedia(float n1, float n2){
	float m = (n1+n2)/2;
	return m;
}

int main() {
	
	float nota1, nota2, media;
	
	printf("\n Informe a primeira nota: ");
	scanf("%f", &nota1);

	printf("\n Informe a segunda nota: ");
	scanf("%f", &nota2);
	
	media = cMedia(nota1, nota2);
	printf("\n A media é %.2f", media);
	
	return 0;
}
