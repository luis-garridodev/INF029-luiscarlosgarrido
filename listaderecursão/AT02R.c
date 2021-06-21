#include <stdio.h>
int fibonacci(int x){
	
	int f1=0;
	int f2=1;
	int f3;
	if(x<0){
		printf("numero invalido\n");
	}
	else{
		
		while(f2<x){
			f3=f2+f1;
			printf("%d",f3);
			f1=f2;
			f2=f3;
			
			
		}
	}
	
	return f3;
	
}




int main() {
	int numero;
	int resultado;
	
	printf("digite o numero da sequencia de fibonacci desejada:\n");
	scanf("%d",&numero);
	resultado=fibonacci(numero);
	printf("resposta:%d\n",resultado);
}