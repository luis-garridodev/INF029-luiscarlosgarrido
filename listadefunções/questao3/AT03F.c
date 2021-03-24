#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fatorial(int nf){
	int a=nf;
	int conta=1;
	int origin;
	origin=a;
	
	for(int i=a;i>1;i--){
		
		conta=conta*i;
		
		
		
		
	}
	return conta;
}







int main(){
	int resultado;
	
	int numero;
	printf("digite o fatorial:\n");
	scanf("%d",&numero);
	resultado=fatorial(numero);
	
	printf("resposta da questao:%d\n",resultado);
	system("pause");
	return 1;
	
	
}

