#include <stdio.h>
#include <stdlib.h>
#define TAM 10

#include "EstruturaVetores.h"
int ehPosicaoValida(int posicao);

typedef struct Elem
{
	int qtd;
	int tam;
	int *aux;
	
} Elemento;

Elemento vetorPrincipal[TAM];


/*
	Objetivo: criar estrutura auxiliar na posição 'posicao'.
	com tamanho 'tamanho'
	
	Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho tem inteiro maior ou igual a 1
*/
int criarEstruturaAuxiliar(int posicao, int tamanho)
{
	
	int retorno = 0;
	
	// a entrada posicao do usuário vai de 1 a 10
	// internamente é de 0 a 9
	// if (posicao - 1 < 0 || posicao - 1 > 9)
	//if (posicao < 1 || posicao > 10)
	if (ehPosicaoValida(posicao) == POSICAO_INVALIDA)
	{
		// se posição é um valor válido {entre 1 e 10}
		retorno = POSICAO_INVALIDA;
	}
	else if (vetorPrincipal[posicao - 1].aux != NULL)
	{
		// a posicao pode já existir estrutura auxiliar
		retorno = JA_TEM_ESTRUTURA_AUXILIAR;
	}
	else if (tamanho < 1)
	{
		// o tamanho nao pode ser menor que 1
		retorno = TAMANHO_INVALIDO;
	}
	else
	{
		
		// deu tudo certo, crie
		vetorPrincipal[posicao - 1].aux = malloc(tamanho * sizeof(int));
		vetorPrincipal[posicao - 1].tam = tamanho;
		
		if (!vetorPrincipal[posicao - 1].aux)
		{
			// o tamanho ser muito grande
			retorno = SEM_ESPACO_DE_MEMORIA;
		}
		else
		
		retorno = SUCESSO;
	}
	
	return retorno;
}

/*
	Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
	Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
	CONSTANTES
*/
int inserirNumeroEmEstrutura(int posicao, int valor)
{
	
	int retorno = 0;
	int existeEstruturaAuxiliar = 0;
	int posicao_invalida = 0;
	
	//if (posicao < 1 || posicao > 10)
	if (ehPosicaoValida(posicao) == POSICAO_INVALIDA)
	{
		// se posição é um valor válido {entre 1 e 10}
		retorno = POSICAO_INVALIDA;
	}
	else
	{
		// testar se existe a estrutura auxiliar
		if (vetorPrincipal[posicao - 1].aux == NULL)
		{
			retorno = SEM_ESTRUTURA_AUXILIAR;
		}
		else
		{
			if (vetorPrincipal[posicao - 1].qtd == vetorPrincipal[posicao - 1].tam)
			{
				retorno = SEM_ESPACO;
			}
			else
			{
				//insere
				vetorPrincipal[posicao - 1].aux[vetorPrincipal[posicao - 1].qtd] = valor;
				vetorPrincipal[posicao - 1].qtd++;
				retorno = SUCESSO;
			}
		}
	}
	
	return retorno;
}

/*
	Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
	ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
	Obs. Esta é uma exclusão lógica
	
	Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao)

{
	
	int retorno;
	
	//if (posicao < 1 || posicao > 10)
	if (ehPosicaoValida(posicao) == POSICAO_INVALIDA)
	{
		// se posição é um valor válido {entre 1 e 10}
		retorno = POSICAO_INVALIDA;
	}
	else if (vetorPrincipal[posicao - 1].aux == NULL)
	{
		
		retorno = SEM_ESTRUTURA_AUXILIAR;
	}
	else if (vetorPrincipal[posicao - 1].qtd < 1)
	{
		retorno = ESTRUTURA_AUXILIAR_VAZIA;
	}
	else
	{
		vetorPrincipal[posicao - 1].qtd--;
		retorno = SUCESSO;
	}
	return retorno;
}

/*
	Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
	Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
	ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
	Obs. Esta é uma exclusão lógica
	Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
	
*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
	
	int retorno;
	
	if (ehPosicaoValida(posicao) == POSICAO_INVALIDA)
	{
		retorno = POSICAO_INVALIDA;
	}
	else if (vetorPrincipal[posicao - 1].aux == NULL)
	{
		retorno = SEM_ESTRUTURA_AUXILIAR;
	}
	else if (vetorPrincipal[posicao - 1].qtd < 1)
	{
		retorno = ESTRUTURA_AUXILIAR_VAZIA;
	}
	else
	{
		retorno = NUMERO_INEXISTENTE;
		for (int i = 0; i < vetorPrincipal[posicao - 1].qtd; i++)
		{
			if (vetorPrincipal[posicao - 1].aux[i] == valor)
			{
				retorno = SUCESSO;
				for (int j = i; j < vetorPrincipal[posicao - 1].qtd; j++)
				{
					vetorPrincipal[posicao - 1].aux[j] = vetorPrincipal[posicao - 1].aux[j + 1];
				}
				vetorPrincipal[posicao - 1].qtd--;
				break;
			}
		}
	}
	
	return retorno;
}

// se posição é um valor válido {entre 1 e 10}
int ehPosicaoValida(int posicao)
{
	int retorno = 0;
	if (posicao < 1 || posicao > 10)
	{
		retorno = POSICAO_INVALIDA;
	}
	else
	retorno = SUCESSO;
	
	return retorno;
}
/*
	Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
	os números devem ser armazenados em vetorAux
	
	Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
	
	int retorno;
	if (ehPosicaoValida(posicao) == POSICAO_INVALIDA)
	{
		retorno = POSICAO_INVALIDA;
	}
	
	else if (vetorPrincipal[posicao - 1].aux == NULL)
	{
		retorno = SEM_ESTRUTURA_AUXILIAR;
	}
	
	else {
		for(int i=0;i<vetorPrincipal[posicao - 1].qtd;i++){
			
			vetorAux[i]=vetorPrincipal[posicao-1].aux[i];
			
			
			
			
			
		}
		retorno=SUCESSO;
		
	}
	
	
	return retorno;
}

/*
	Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
	os números devem ser armazenados em vetorAux
	
	Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
	int troca;
	int retorno = 0;
	if (ehPosicaoValida(posicao) == POSICAO_INVALIDA)
	{
		retorno = POSICAO_INVALIDA;
	}
	
	else if (vetorPrincipal[posicao - 1].aux == NULL)
	{
		retorno = SEM_ESTRUTURA_AUXILIAR;
	}
	
	else {
		for(int i=0;i<vetorPrincipal[posicao - 1].qtd;i++){
			
			
			for(int j=0;j<vetorPrincipal[posicao - 1].qtd;j++){
				
				
				troca=vetorPrincipal[posicao-1].aux[i];
				vetorPrincipal[posicao-1].aux[i]=vetorAux[j];
				vetorAux[j]=troca;
				
				
				
				
				
				
				
			}
			
			
			
			
			
		}
		retorno=SUCESSO;
		
	}
	
	return retorno;
}

/*
	Objetivo: retorna os números de todas as estruturas auxiliares.
	os números devem ser armazenados em vetorAux
	
	Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
	TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
	int retorno = 0;
	int k = 0;
	int cont = 0;
	
	for(int i=0;i<10;i+=1){ 
		
		if(vetorPrincipal[i].qtd > 0) {
			
			for(int j=0;j<vetorPrincipal[  i  ].qtd;j++){
				
				vetorAux[k] = vetorPrincipal[i].aux[j];
				
				k++;
				
			}
			}else{
			
			cont ++;
			
		}
	}
	
	if(cont == 10)
	return TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
    else
	return SUCESSO;
	return retorno;	
}




/*
	Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
	os números devem ser armazenados em vetorAux
	
	Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    
*/
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
	int i;
	int Total_de_Elementos;
	int j;
	int k = 0; 
	int aux;
	int retorno = 0;
	int jj, kk;
	int contador = 0;
	
	Total_de_Elementos = 0;
	for(i = 0 ; i < 10 ; i++){
		
        if(vetorPrincipal[i].qtd > 0){
			
            for(j = 0 ; j < vetorPrincipal[i].qtd; j++){
				
            	
				Total_de_Elementos++;
                vetorAux[k] = vetorPrincipal[i].aux[j];
                k++;
				
				
			}
			
			}else{
			
        	contador ++;
		}
        if(contador == 10)
		return TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
		else{
			
		}
		
		for( jj = 0; jj < Total_de_Elementos; jj ++){
			
			for( kk = jj ; kk < Total_de_Elementos; kk ++){
				
				if( vetorAux[kk] < vetorAux[jj] ){
					
					aux = vetorAux[jj];
					vetorAux[jj] = vetorAux[kk];
					vetorAux[kk] = aux;
					retorno = SUCESSO;
					
				}
			}
		}
	}
	
	
	return (retorno);
}









/*
	Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
	Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
	
	Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{
	int retorno = 0;
	int tamanho, memoria_insuficeinte;
	
	tamanho = vetorPrincipal[posicao-1].tam + novoTamanho;
	
    
	if(ehPosicaoValida(posicao) != SUCESSO)
	
	retorno = POSICAO_INVALIDA;
	
	
	
	else if( vetorPrincipal[posicao-1].aux == NULL )
	
	retorno =  SEM_ESTRUTURA_AUXILIAR;
	
  	
	else if( tamanho  < 1)
	
	retorno =  NOVO_TAMANHO_INVALIDO;
	
	else{
		
		
		vetorPrincipal[posicao-1].aux = (int*) realloc (vetorPrincipal[posicao-1].aux,  tamanho * sizeof(int));
		
		if(vetorPrincipal[posicao-1].aux == NULL){
			
			retorno = SEM_ESPACO_DE_MEMORIA;
			
			}else{
        	
			vetorPrincipal[posicao-1].tam = tamanho;
			retorno = SUCESSO;
			
			if(tamanho < vetorPrincipal[posicao-1].qtd ){
				vetorPrincipal[posicao-1].qtd = tamanho;
				retorno = SUCESSO; 
			}
			
		} 
		
	}
	
	return retorno;
	
	return retorno;
}

/*
	Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
	
	Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/
int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{
	
	int retorno = 0;
	
	return retorno;
}

/*
	Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.
	
	Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/
No *montarListaEncadeadaComCabecote()
{
	return NULL;
}

/*
	Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
	Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
}

/*
	Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
	O ponteiro inicio deve ficar com NULL.
	
	Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
}

/*
	Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 
	
*/

void inicializar()
{
	int i;
	for (i = 0; i < TAM; i++)
	{
		vetorPrincipal[i].aux = NULL;
		vetorPrincipal[i].qtd = 0;
		vetorPrincipal[i].tam = 0;
	}
}

/*
	Objetivo: finaliza o programa. deve ser chamado ao final do programa 
	para poder liberar todos os espaços de memória das estruturas auxiliares.
	
*/

void finalizar()
{
}






















