#include<stdio.h>
#include<stdlib.h>
#include "soma.h"
int main(){
	
	
	int soma1,soma2;
	int f;
	printf("digite o primeiro numero:\n");
	scanf("%d",&soma1);
	printf("digite o segundo numero:\n");
	scanf("%d",&soma2);
	f=contadenumeros( soma1, soma2);
	printf("resultado : %d\n",f);
	return 0;
	
	
}
