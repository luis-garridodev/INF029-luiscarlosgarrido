#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void lerTresPalavras(char palavra1[], char palavra2[], char palavra3[]){
	
	
	printf("Digite a primeira palavra: ");
	scanf("%s", palavra1); 
	printf("Digite a segunda palavra: ");
	scanf("%s", palavra2);
	printf("Digite a terceira palavra: ");
	scanf("%s", palavra3);
	
}




int main() {
	
	
    char p1[50];
    char p2[50];
    char p3[50];
	
    lerTresPalavras(p1, p2, p3);
    printf("A primeira palavra eh: %s\n", p1);
    printf("A segunda palavra eh: %s\n", p2);
    printf("A terceira palavra eh: %s\n", p3);
    return 0;
}