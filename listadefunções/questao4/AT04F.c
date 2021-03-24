#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int imprimevetor(int *vetor,int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("digite os numeros:\n");
		scanf("%d",&vetor[i]);
		printf("numeros digitados:[%d]=%d\n",i,vetor[i]);
	    
	}
}







int main(){
	int vetor[3];
	
	
	imprimevetor(vetor,3);
	system("pause");
	return 1;
	
	
}

