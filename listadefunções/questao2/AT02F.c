#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int subtracao(int menos1,int menos2,int menos3){
	int resposta;
	resposta=(menos1-menos2)-menos3;
	
	
	
}


int main(){
	int a;
	int b;
	int c;
	
	int resultado;
	printf("digite o primeiro numero:\n");
	scanf("%d",&a);
	printf("digite o segundo numero:\n");
	scanf("%d",&b);
	printf("digite o terceiro numero:\n");
	scanf("%d",&c);
	resultado=subtracao(a,b,c);
	
	printf("resposta:%d\n",resultado);
	system("pause");
	return 1;
	
	
}