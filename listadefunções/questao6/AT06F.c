#include <stdio.h>
#include <stdlib.h>


char *lerTresLetras(){
	
	
	char *letras; // = "abcIFBA";
	char let[3];
	
	printf("Digite as letras: ");
	scanf("%s", let);
	letras = let;
	
    
    
	return letras;
	
	
}



int main() {
	
	
	
	
	printf("\n\n");
	
	printf("\n%s", lerTresLetras());
	
	printf("\n\n");
	
    
	
    return 0;
}