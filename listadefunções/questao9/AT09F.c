#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Cliente{

       char nome[100];
       int dia;
       int mes;
       int ano;
       char cpf[11];
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

void validarnome(char nome[100]){
int i;
int tamanho;
for(i=0;i=='\0';i++){
tamanho=strlen(nome);
if(tamanho>20){
  printf("nome inválido\n");
break;
}
else{
  printf("nome válido\n");
  break;
}


}






}
void validarsexo(char sexof[10]){

int i;
char comparasexo[6];
comparasexo[0]='m';
comparasexo[1]='M';
comparasexo[2]='f';
comparasexo[3]='F';
comparasexo[4]='O';
comparasexo[5]='o';
for(i=0;i=='\0';i++){

if(sexof[i]==comparasexo[0]||sexof[i]==comparasexo[1]){

printf("sexo: masculino\n");

}
if(sexof[i]==comparasexo[2]||sexof[i]==comparasexo[3]){
  printf("sexo:feminino\n");
}
if(sexof[i]==comparasexo[4]||sexof[i]==comparasexo[5]){
  printf("sexo:outro\n");

}



}




}
void validacpf(char cpff[11]){
  int i;
  int tamanho;
  for(i=0;i=='\0';i++){
    tamanho=strlen(cpff);
if(tamanho<=11){
  printf("cpf valido\n");

}
else{
  printf("cpf invalido");
}

  }




}
void validardata(int diaf,int mesf,int anof){
int i;

switch(mesf){
case 1:
{
if(diaf<=31){
  printf("data correta\n");
}

else{
  printf("data incorreta\n");
}
}
case 2:
{
if(diaf<=28){
  printf("data correta\n");
}
else{
  printf("data incorreta\n");
}

}
case 3:
{
if(diaf<=31){
  printf("data correta\n");
}

else{
  printf("data incorreta\n");
}
}
case 4:
{
if(diaf<=30){
  printf("data correta\n");
}
else{
  printf("data incorreta\n");
}

}
case 5:
{
if(diaf<=31){
  printf("data correta\n");
}
else{
  printf("data incorreta\n");
}

}
case 6:
{
if(diaf<=30){
  printf("data correta\n");
}
else{
  printf("data incorreta\n");
}

}
case 7:
{
if(diaf<=31){
  printf("data correta\n");
}
else{
  printf("data incorreta\n");
}

}
case 8:
{
if(diaf<=31){
  printf("data correta\n");
}

else{
  printf("data incorreta\n");
}
}
case 9:
{
if(diaf<=30){
  printf("data correta\n");
}

else{
  printf("data incorreta\n");
}
}
case 10:
{
if(diaf<=31){
  printf("data correta\n");
}

else{
  printf("data incorreta\n");
}
}
case 11:
{
if(diaf<=30){
  printf("data correta\n");
}
else{
  printf("data incorreta\n");
}

}
case 12:
{
if(diaf<=31){
  printf("data correta\n");
}
else{
  printf("data incorreta\n");
}

}






}

}

int main() {

    struct Cliente p;
    int tamanho;
    p = cadastrarCliente(p);

    printf("\n");
    printf("Nome: %s\n", p.nome);
    printf("Dia de nascimento: %d\n", p.dia);
    printf("Mes de nascimento: %d\n", p.mes);
    printf("Ano de nascimento: %d\n", p.ano);
    printf("CPF: %s\n", p.cpf);
    printf("Sexo: %s\n", p.sexo);
validarnome(&p.nome[tamanho]);
validarsexo(&p.sexo[tamanho]);
validacpf(&p.cpf[tamanho]);
validardata(p.dia,p.mes,p.ano);
    return 0;
}