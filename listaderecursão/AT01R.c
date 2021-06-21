#include <stdio.h>

int fatorial(x){
	int resultado;
	if(x==0){
		
		resultado=1;
	}
	else{
		resultado= x*fatorial(x-1);
	}
	return resultado;
	
	
}




int main() {
	int numero;
	int resultado;
	printf("digite o numero que deseja saber:\n");
	scanf("%d",&numero);
	resultado=fatorial(numero);
	printf("o fatorial eh:%d\n",resultado);
}