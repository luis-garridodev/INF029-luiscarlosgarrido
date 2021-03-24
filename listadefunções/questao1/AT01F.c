#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int soma(int soma1,int soma2){


int resposta;

resposta=soma1+soma2;
return resposta;
}


int main(){
int a;
int b;
int resultado;
printf("digite o primeiro numero:\n");
scanf("%d",&a);
printf("digite o segundo numero:\n");
scanf("%d",&b);
resultado=soma(a,b);
printf("resposta:%d\n",resultado);
return 1;


}



