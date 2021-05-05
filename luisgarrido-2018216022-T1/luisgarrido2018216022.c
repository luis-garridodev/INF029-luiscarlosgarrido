// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome:
//  email:
//  Matrícula:
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>
#include "luisgarrido2018216022.h"

/*
	## função utilizada para testes  ##
	
	somar = somar dois valores
	@objetivo
    Somar dois valores x e y e retonar o resultado da soma
	@entrada
    dois inteiros x e y
	@saida
    resultado da soma (x + y)
*/
int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    return soma;
}

/*
	## função utilizada para testes  ##
	
	fatorial = fatorial de um número
	@objetivo
    calcular o fatorial de um número
	@entrada
    um inteiro x
	@saida
    fatorial de x -> x!
*/
int fatorial(int x)
{ //função utilizada para testes
    int fat = 1;
    return fat;
}

/*
	Q1 = validar data
	@objetivo
    Validar uma data
	@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
	@saida
    0 -> se data inválida
    1 -> se data válida
	@restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
*/
int q1(char *data)
{
	
    
    
	
    int k;
    int l;
	
    
	
    //quebrar a string data em strings sDia, sMes, sAno
	int datavalida = 1;
	
    int mesf;
    int diaf;
    int anof;
    int ndia;
    int nmes;
    int nano;
	
    //quebrar a string data em strings sDia, sMes, sAno
	
	
	
	
	char sDia[3];
	char sMes[3];
	char sAno[5];
	int i;
	
	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}else 
	return 0;
	
	
	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;
	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}
	
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}else
	return 0;
	
	
	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}
	
	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}else
	return 0;
	
	
	//imprimir os valores apenas para teste
	printf("---------------");
	printf("Data: %s\n", data);	
	printf("Dia: %s\n", sDia);
	printf("Mes: %s\n", sMes);
	printf("Ano: %s\n", sAno);
	
	return 1; 
	
	
	
	
	
	
	
	
    //converter sDia, sMes e sAno em inteiros (ex: atoi)
	diaf=atoi(sDia);
	mesf=atoi(sMes);
	anof=atoi(sAno);
	
    //criar as variáveis iDia, iMes, iAno
	
    
	
    
	
    switch (mesf)
    {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if (diaf < 1 || diaf > 31)
			{
				return 0;
			}
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if (diaf < 1 || diaf > 30)
			{
				return 0;
			}
			break;
		}
		case 2:
		{
			if (diaf == 29 && (anof/4==0))
			{
				
				return 1;
			}
			else if (diaf < 1 || diaf > 28)
			{
				return 0;
			}
			break;
		}
        default:
		return 0;
	}
	
	
	
	//validacao do ano
	if(anof<1000||anof>9999){
		return 0;
	}
	else{
		return 1;
	}
	//ano bissexto
	if((anof%100==1&&anof%4==0)||anof%400==0){
		return 1;
	}
	else{
		return 0;
	}
	//printf("%s\n", data);
	
	if (datavalida){
		return 1;
	}
    
	else
    return 0;
}

/*
	Q2 = diferença entre duas datas
	@objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
	@entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
	@saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
*/
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{
	
    //calcule os dados e armazene nas três variáveis a seguir
    int nDias, nMeses, nAnos;
	
    if (q1(datainicial) == 0)
	return 2;
	
    nDias = 4;
    nMeses = 10;
    nAnos = 2;
	
    /*mantenha o código abaixo, para salvar os dados em 
		nos parâmetros da funcao
	*/
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;
	
    //coloque o retorno correto
    return 1;
}
void converteTextoParaMaiuscula(char *texto)
{
    int i;
    for (i = 0; texto[i] != '\0'; i++)
	texto[i] = toupper(texto[i]);
}
/*
	Q3 = encontrar caracter em texto
	@objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
	@entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
	Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
	@saida
    Um número n >= 0.
*/
int q3(char *texto, char c, int isCaseSensitive)
{
    int qtdOcorrencias = 0;
    int i;
	
    if (isCaseSensitive == 0)
    {
        converteTextoParaMaiuscula(texto);
        c = toupper(c);
	}
	
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == c)
        {
            qtdOcorrencias++;
		}
	}
	
    return qtdOcorrencias;
}




/*
	Q4 = encontrar palavra em texto
	@objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
	@entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
	@saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
	posicoes[0] = 13;
	posicoes[1] = 16;
	Observe que o índice da posição no texto deve começar ser contado a partir de 1.
	O retorno da função, n, nesse caso seria 1;
	
*/
int q4(char *strTexto, char *strBusca, int posicoes[30])
{
    int qtdOcorrencias = -1;
	
    return qtdOcorrencias;
}

/*
	Q5 = inverte número
	@objetivo
    Inverter número inteiro
	@entrada
    uma int num.
	@saida
    Número invertido
*/

int q5(int num ){
	int inv=0;
	int i=1;
	while(i<=num)
	{
		inv*=10;
		inv+=(num%(i*10)-num%i)/i;
		i*=10;
	}
	
	
	return inv;
}
/*
	Q5 = ocorrência de um número em outro
	@objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
	@entrada
    Um número base (numerobase) e um número de busca (numerobusca).
	@saida
    Quantidade de vezes que número de busca ocorre em número base
*/

int q6(int numerobase, int numerobusca)
{
    int qtdOcorrencias;
    return qtdOcorrencias;
} 