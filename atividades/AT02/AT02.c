#include<stdio.h>
#include<stdlib.h>

int main(){
	int calculadora;
	int calculoaux;
	int menu;
	printf("digite a opcao desejada:\n");
	scanf("%d",&menu);
	switch(menu){
		case 0:{
			printf("sair\n");
			break;
		}
		case 1:
		{
			printf("somar:\n");
			printf("digite o primeiro numero:\n");
			scanf("%d",&calculadora);
			printf("digite o segundo numero:\n");
			scanf("%d",&calculoaux);
			printf("numero1:%d,numero2:%d,resultado:%d",calculadora,calculoaux,calculadora+calculoaux);
			break;
		}
		case 2:{
			printf("subtracao:\n");
			printf("digite o primeiro numero:\n");
			scanf("%d",&calculadora);
			printf("digite o segundo numero:\n");
			scanf("%d",&calculoaux);
			printf("numero1:%d,numero2:%d,resultado:%d",calculadora,calculoaux,calculadora-calculoaux);
			break;
		}
		case 3:
		{
			printf("multiplicar:\n");
			printf("digite o primeiro numero:\n");
			scanf("%d",&calculadora);
			printf("digite o segundo numero:\n");
			scanf("%d",&calculoaux);
			printf("numero1:%d,numero2:%d,resultado:%d",calculadora,calculoaux,calculadora*calculoaux);
			break;
		}
		case 4:
		{
			printf("dividir:\n");
			printf("digite o primeiro numero:\n");
			scanf("%d",&calculadora);
			printf("digite o segundo numero:\n");
			scanf("%d",&calculoaux);
			printf("numero1:%d,numero2:%d,resultado:%d",calculadora,calculoaux,calculadora/calculoaux);
			break;
			
		}
	}
}
