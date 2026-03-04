#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int aposta [6][3];
	int i,j,media;
	
	srand(time(NULL));
	printf("\n");
	
	for (i = 0; i < 6; i++){
		for (j = 0; j < 2; j++){
		    aposta[i][j] = rand() % 100;
		    if(j==1){
		    	aposta[i][j+1] = (aposta[i][0] + aposta[i][1]) / 2;
			}
		}
	}	
	
	for (i = 0; i < 6; i++){
		  for (j = 0; j < 3; j++){
		  	printf("| %d | \t", aposta[i][j]);
		  }
		printf("\n");
	}
	
	return 0;
}
