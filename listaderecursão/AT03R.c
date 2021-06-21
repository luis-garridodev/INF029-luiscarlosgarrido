#include <stdio.h>


void inversao(int x){
	int c;
	
	if(x>=0){
		do{
			c=x %10;
			printf("%d",c);
			x /=10;
		}while(x!=0);
		printf("\n");
		
	}
	
	
}



int main() {
	int numero;
	int resultado;
	printf("digite o numero:\n");
	scanf("%d",&numero);
	inversao(numero);
	
	
	
}