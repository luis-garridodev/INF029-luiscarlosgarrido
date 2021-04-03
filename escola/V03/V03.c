#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 5
//reorganizar structs
/*================ INICIO Struscts =================*/
//projeto escola V1,irá ser atualizado na v2//

//Cadastro de Alunos (Matrícula, Nome, Sexo, Data Nascimento, CPF) ./
// Cadastro de Professores (Matrícula, Nome, Sexo, Data Nascimento, CPF).
// Cadastro de Disciplinas (Nome, Código, Semestre, Professor)


typedef struct cad
{
	
	int matricula;
	char nome[31];
	char sexo[2];
	char datadenascimento[11];
	int cpf;
	
} Aluno;

typedef struct professor
{
	
	int matricula;
	char nome[31];
	char sexo[2];
	char datadenascimento[11];
	int cpf;
	
	
} cadasProf;

typedef struct disciplinas
{
	
	char nome[30];
	int codigo;
	int semestre;
	char professor[30];
	
} materia;
typedef struct novo
{
	int matricula;
	char nome[31];
	char sexo[2];
	char datadenascimento[11];
	int cpf; 
}vazio;



typedef struct d
{
	int ano_nascimento;
	
}Data;
/*================ FIM Struscts =================*/

/*================ INICIO declaraco de funcao =================*/
void leitordecadastro(Aluno n);
void listarmateria();
int validardata(Data d);
/*================ FIM declaracao de funcao =================*/

/*================ INICIO DE PROCEDIMENTOS =================*/






void cadastrarAluno(Aluno listaAlunos[TAM], int *contAluno)
{
	printf("Fazer o cadastro do aluno\n");
	
	printf("digite o numero de matricula:\n");
	scanf("%d", &listaAlunos[*contAluno].matricula);
	
	printf("digite o nome do aluno:\n");
	scanf("%s", listaAlunos[*contAluno].nome);
	getchar();
	
	fflush(stdin);
	
	printf("digite data de nascimento do aluno:\n");
	scanf("%s", listaAlunos[*contAluno].datadenascimento);
	getchar();
	
	fflush(stdin);
	
	printf("digite o seu cpf:\n");
	scanf("%d", &listaAlunos[*contAluno].cpf);
	
	printf("digite m para homem ou f para mulher:\n");
	scanf("%s", listaAlunos[*contAluno].sexo);
	
	getchar();
	
	fflush(stdin);
	*contAluno = *contAluno + 1;
	
}

void listarAlunos(Aluno listaAlunos[TAM], int *contAluno)
{
	printf("Lista dos alunos\n");
	for(int i=0;i<*contAluno;i++){
		printf("## Aluno %d ##\n", i + 1);
		printf("numero de matricula:%d\n", listaAlunos[i].matricula);
		printf("nome do aluno:%s\n", listaAlunos[i].nome);
		printf("data de nascimento do aluno:%s\n",listaAlunos[i].datadenascimento);
		printf("cpf do aluno:%d\n", listaAlunos[i].cpf);
		printf("sexo do aluno:%s\n", listaAlunos[i].sexo);
	}
	
}
int pesquisaraluno(int procura, int *contaluno , Aluno listaAlunos[]){
	
	
	for(int i=0; i<*contaluno; i++){  
		if(listaAlunos[i].matricula == procura){
			return i;
		}
		
		else{
			
			//printf(" Matricula Inexistente\n"); 
			return -1;
			
		}  
	}
	return 1;
}

void operacoesAluno(Aluno listaAlunos[TAM], int *contAluno)
{
	int menu;
	printf("### Aluno ####\n");
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[0] -> Voltar\n");
		printf("[1] -> Cadastrar\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");
		printf("[4] ->verificar\n");
		
		
		scanf("%d", &menu);
		
		switch (menu)
		{	
			case 0:
			break;
			case 1:
			{
				cadastrarAluno(listaAlunos, contAluno);
				
				break;
			}
			
			case 2:
			{
				listarAlunos(listaAlunos, contAluno);
				break;
			}
			case 3:
			{printf("colocar operacao de exclusão!");
				
				break;
			}
			case 4:
			{
				int pesquisa;
				vazio Vazio;
				int procura;
				
				printf("Numero da matricula que deseja procurar \n");
				scanf("%d" ,&procura);
				
				pesquisa = pesquisaraluno(procura,contAluno , listaAlunos);
				if (pesquisa >= 0){
					printf(" Matricula: % d \n Nome : %s \n Dt de nascimento:%s \n" , listaAlunos[pesquisa].matricula , listaAlunos[pesquisa].nome , listaAlunos[pesquisa].datadenascimento);
					printf("  Cpf: %d  \n Sexo : %s \n" ,listaAlunos[pesquisa].cpf,listaAlunos[pesquisa].sexo);
				}
				else{
					printf(" Matricula: % d \n Nome : %s \n Dt de nascimento:%s \n" , Vazio.matricula = -1 , Vazio.nome , Vazio.datadenascimento);
					printf("  Cpf: %d  \n Sexo : %s \n" ,Vazio.cpf = '\0',Vazio.sexo);
				}
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
}
//término de operações de aluno//
void cadastroprofessor(cadasProf listaprofessor[TAM],int *contprofessor)
{
	int validou;
	printf("Fazer o cadastro do professor\n");
	
	printf("digite o numero de matricula:\n");
	scanf("%d", &listaprofessor[*contprofessor].matricula);
	
	printf("digite o nome do professor:\n");
	scanf("%s", listaprofessor[*contprofessor].nome);
	getchar();
	
	fflush(stdin);
  	do{
		char strData[11];
		printf("digite data de nascimento do professor:\n");
		scanf("%s", strData);
		
		Data d;
		
		validou = validardata(d);
		
		if (!validou){
			printf("data invÃ¡lida.");
			}else{
			
		}
		getchar();
	}while (!validou);
	
	printf("digite data de nascimento do professor:\n");
	scanf("%s", listaprofessor[*contprofessor].datadenascimento);
	getchar();
	
	fflush(stdin);
	
	printf("digite o seu cpf:\n");
	scanf("%d", &listaprofessor[*contprofessor].cpf);
	
	printf("digite m para homem ou f para mulher:\n");
	scanf("%s", listaprofessor[*contprofessor].sexo);
	
	getchar();
	
	fflush(stdin);
	*contprofessor = *contprofessor + 1;
	
}
void listarprofessor(cadasProf listaprofessor[TAM],int *contprofessor){
	
	printf("Lista dos professores\n");
	for(int i=0;i<*contprofessor;i++){
		printf("## professor %d ##\n", i + 1);
		printf("numero de matricula:%d\n", listaprofessor[i].matricula);
		printf("nome do professor:%s\n", listaprofessor[i].nome);
		printf("data de nascimento do professor:%s\n",listaprofessor[i].datadenascimento);
		printf("cpf do professor:%d\n", listaprofessor[i].cpf);
		printf("sexo do professor:%s\n", listaprofessor[i].sexo);
		
	}
}

// alterado para void
int validardata(Data d){
	int num,Dia,Mes,Ano, idade;
	
    Dia = num / 1000000;
    Mes = (num % 1000000)/10000;
    Ano = (num % 1000000)%10000;
	//valide a data a partir de strData.
	//se tiver tudo ok, armazene os valores em d e retorne 1
	//se der algum erro, retorne 0
	if(Dia>31){  
		printf("Data invalida.\n");
		return 0;
		
	}
	
	else if(Mes>12){    
		printf("Data invalida.\n");
		return 0;
	}
	
	else if((Mes==2)&&(Dia>28)){
		
		printf("data invalida.\n");
		return 0;
		
	}
	
	else if(((Dia > 30) && (Mes == 4)) || ((Mes == 6)||(Mes == 9)||(Mes == 11))){
		printf("data invalida.\n");
		return 0;
	}
	
	return 1;
}
void pesquisarmatricula(cadasProf listaprofessor[TAM] , int *contprofessor){
	int procura;
	int sair = 1;
	
	
    do
    { 
		printf("Numero da matricula que deseja procurar \n");
		scanf("%d" ,&procura);
		
		for(int i=0; i<*contprofessor; i++){
			if(listaprofessor[i].matricula == procura)
			printf(" Matricula Correta: \n %d \n" , listaprofessor[i].matricula);
			else{
				printf(" Matricula Inexistente\n");  
			}  
		}
		printf(" Para Continuar: digite qualquer numero\n Sair: digite 0\n ");  
		scanf("%d" , &sair);  
	}while(sair!=0);
	
}

void operacoesprofessor(cadasProf listaprofessor[TAM] ,  int *contprofessor){
	
	int menu;
	printf("### professor ####\n");
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[0] -> Voltar\n");
		printf("[1] -> Cadastrar\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");
		printf("[4] -> Listar Matricula\n");
		
		scanf("%d", &menu);
		
		switch (menu)
		{	
			case 0:
			break;
			case 1:
			{
				cadastroprofessor(listaprofessor , contprofessor);
				
				break;
			}
			
			case 2:
			{
				listarprofessor(listaprofessor ,  contprofessor);
				break;
			}
			case 3:
			{
				//excluirAluno(listaAlunos,cont);
				break;
			}
			case 4:
			{
				pesquisarmatricula(listaprofessor,contprofessor);
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
	
	
	
	
	
}
//fim de operações com professor//
//começo com perações com matéria//
void cadastromateria(materia listamateria[TAM], int *contmateria)
{
  	printf("Fazer o cadastro da materia\n");
	
	printf("digite onome da materia:\n");
	scanf("%s", listamateria[*contmateria].nome);
	getchar();
	
	fflush(stdin);
	printf("digite o codigo da materia:\n");
	scanf("%d", &listamateria[*contmateria].codigo);
	
	
	printf("digite o semestre:\n");
	scanf("%d", &listamateria[*contmateria].semestre);
	
	
	
	printf("digite o professor que leciona:\n");
	scanf("%s", listamateria[*contmateria].professor);
	
	getchar();
	
	fflush(stdin);
	*contmateria = *contmateria + 1;
	
	
	
	
	
	
}



void listarmateria(materia listamateria[TAM],int *contmateria){
	
	printf("Lista da materia\n");
	for(int i=0;i<*contmateria;i++){
		printf("## professor %d ##\n", i + 1);
		printf("nome da materia:%s\n", listamateria[i].nome);
		printf("codigo da materia:%d\n", listamateria[i].codigo);
		printf("semestre:%d\n",listamateria[i].semestre);
		
		printf("nome do professor:%s\n", listamateria[i].professor);
		
	}
}
void operacoesmateria(materia listamateria[TAM], int *contmateria)
{
	int menu;
	printf("### materia ####\n");
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[0] -> Voltar\n");
		printf("[1] -> Cadastrar\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");
		
		scanf("%d", &menu);
		
		switch (menu)
		{	
			case 0:
			break;
			case 1:
			{
				cadastromateria(listamateria, contmateria);
				
				break;
			}
			
			case 2:
			{
				listarmateria (listamateria, contmateria);
				break;
			}
			case 3:
			{
				//excluirAluno();
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
}





/*================ INICIO MAIN =================*/

int main()
{
	Aluno c;
	int menu;
	materia a;
	cadasProf d;
	Aluno listaAlunos[TAM];
	int contAluno = 0;
	cadasProf listaprofessor[TAM];
	int contprofessor=0;
	materia listamateria[TAM];
	int contmateria=0;
	//menu de interaco excluir, cadastra e listaraluno
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[1] -> Aluno\n");
		printf("[2] -> Professor\n");
		printf("[3] -> Disciplina\n");
		printf("[-1] -> Sair\n");
		scanf("%d", &menu);
		
		switch (menu)
		{
			case 1:
			{
				operacoesAluno(listaAlunos, &contAluno);
				
				
				break; //todo case precisa do break
			}
			case 2:
			{
				printf("opcoes de professor\n");
				operacoesprofessor(listaprofessor,&contprofessor);
				
				break;
			}
			case 3:
			{
				printf("opcoes de disciplina\n");
				operacoesmateria(listamateria, &contmateria);
				break;
			}
		}
	} while (menu != -1);
}
