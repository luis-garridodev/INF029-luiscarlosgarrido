#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Cliente{
	
	char nome[100];
	int dia;
	int mes;
	int ano;
	char cpf[20];
	char sexo[10];
	
};

struct Cliente cadastrarCliente(struct Cliente pessoa){
	
    
	char Nome[100];
	int Dia;
	int Mes;
	int Ano;
	char Cpf[20];
	char Sexo[10];
	
	
	printf("Digite o nome do cliente: ");
	scanf("%[^\n]", Nome);
	printf("Digite o dia de nascimento do cliente: ");
	scanf("%d", &Dia);
	printf("Digite o mes de nascimento do cliente: ");
	scanf("%d", &Mes);
	printf("Digite o ano de nascimento do cliente: ");
	scanf("%d", &Ano);
	printf("Digite o CPF do cliente: ");
	scanf("%s", Cpf);
	printf("Digite o sexo do cliente: ");
	scanf("%s", Sexo);
	
	strcpy(pessoa.nome, Nome);
	pessoa.dia = Dia;
	pessoa.mes = Mes;
	pessoa.ano = Ano;
	strcpy(pessoa.cpf, Cpf);
	strcpy(pessoa.sexo, Sexo);
	
	
    return pessoa;
}

int main() {
	
    struct Cliente p;
    p = cadastrarCliente(p);
	
    printf("\n");
    printf("Nome: %s\n", p.nome);
    printf("Dia de nascimento: %d\n", p.dia);
    printf("Mes de nascimento: %d\n", p.mes);
    printf("Ano de nascimento: %d\n", p.ano);
    printf("CPF: %s\n", p.cpf);
    printf("Sexo: %s\n", p.sexo);
	
    return 0;
}