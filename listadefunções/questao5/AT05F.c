#include <stdio.h>
#include<stdlib.h>


struct conjunto{
	int num1;
	int num2;
	int num3;
	
}lista;
struct conjunto preenchelista(){
	int i;
	
	printf("digite o primeiro numero");
	scanf("%d",&lista.num1);
	printf("digite o segundo numero");
	scanf("%d",&lista.num2);
	
	printf("digite o terceiro numero");
	scanf("%d",&lista.num3);
	return lista;
	
}
int main() {
	struct conjunto lista;
	lista=preenchelista();
	printf("numeros:\n");
	printf("%d\n",lista.num1);
	printf("%d\n",lista.num2);
    printf("%d\n",lista.num3);
	return 0;
}