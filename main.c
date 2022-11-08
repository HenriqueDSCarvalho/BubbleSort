<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

	struct Pessoa{
     int Matricula;
     char Nome[30];
     float Nota;
};struct Pessoa pessoa[3];

void inicializar(){
	pessoa[0].Matricula = 5;
	strcpy(pessoa[0].Nome,"henrique");
	pessoa[0].Nota = 6;

	pessoa[1].Matricula = 4;
	strcpy(pessoa[1].Nome,"jose");
	pessoa[1].Nota = 5;

	pessoa[2].Matricula = 6;
	strcpy(pessoa[2].Nome,"artur");
	pessoa[2].Nota = 7;
}
void ordenacaoBubbleSort(){
void bubbleSortMatricula (struct Pessoa *V, int N){
	int i;
	//imprime o vetor n?o ordenado
	
	printf("\n");
	printf("\t matricula nao ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t matricula: %d \n", pessoa[i].Matricula);
    		
	printf("\n");
	int  continua,  fim = N;
	struct Pessoa aux;
	do {
		
		continua = 0;
		for(i = 0; i < fim-1; i++){
			if(V[i].Matricula > V[i+1].Matricula){
				aux.Matricula = V[i].Matricula;
				V[i].Matricula = V[i+1].Matricula;
				V[i+1].Matricula = aux.Matricula;
				continua = i;					
			}	
		}		
		fim--;
	}while(continua != 0);
	//imprime o vetor ordenado
	printf("\n");
	printf("\t matricula ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t matricula: %d \n", pessoa[i].Matricula);
    		
	printf("\n");
}	
void bubbleSortNota (struct Pessoa *V, int N){
	int i;
	printf("\n");
	printf("\t nao ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t nota: %2.f \n", pessoa[i].Nota);
	
	printf("\n");
	int continua,  fim = N;
	struct Pessoa aux;
	do {
		continua = 0;
		for(i = 0; i < fim-1; i++){
			if(V[i].Nota > V[i+1].Nota){
				aux.Nota = V[i].Nota;
				V[i].Nota = V[i+1].Nota;
				V[i+1].Nota = aux.Nota;
				continua = i;					
			}	
		}		
		fim--;
	}while(continua != 0);
	printf("\n");
	printf("\t ordenado \n\n");	
	for(i = 0; i < 3; i++)
    	printf("\t nota: %2.f \n", pessoa[i].Nota);
	
	printf("\n");
}
void bubbleSortNome (struct Pessoa *V, int N){
	int i;
	printf("\n");
	printf("\t nao ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t nome: %s \n", pessoa[i].Nome);
    		
    printf("\n");
	int  continua,  fim = N;
	struct Pessoa aux;
	do {
		continua = 0;
		for(i = 0; i < fim-1; i++){
		if (strcmp(V[i].Nome, V[i+1].Nome) > 0){
                strcpy(aux.Nome, V[i].Nome);
                strcpy(V[i].Nome, V[i+1].Nome);
                strcpy(V[i+1].Nome, aux.Nome);
                continua = i; 
            }
		}		
		fim--;
	}while(continua != 0);
	printf("\n");
	printf("\t ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf(" \t nome: %s \n", pessoa[i].Nome);
    		
	printf("\n");	
}
inicializar();
int i, escolha;	
	
	printf("\n\n");
		printf("\t ------------ ordenacao bubble sort ---------------\n\n");
	

	do{
		printf(" \t escolha qual campo voce quer ordenar \n\n");
			printf("\t\t matricula tecle 1 \n");
			printf("\t\t nota tecle 2 \n");
			printf("\t\t nome tecle 3 \n");
			printf("\t\t tecle 4 para voltar ao menu inicial \n");
			printf("\t\t tecle 0 para sair \n");
		scanf("%d", &escolha);
		
			switch (escolha){
			case 1 :
			bubbleSortMatricula(pessoa, 3);	
			break;
			
			case 2: 
			bubbleSortNota(pessoa, 3);
			break;
			
			case 3 :
			bubbleSortNome(pessoa, 3);
			break;
			
			case 4 :
				menu();
			break;
			
			default :
				printf("saindo");
		}
	} while (escolha!=0);
}
	
void ordenacaoSelectionSort(){

void selectionSortMatricula(struct Pessoa *V, int N){
	int i, j, menor, a;
	struct Pessoa troca;
		printf("nao ordenado \n");
	for (a = 0; a < 3; a++)
  	printf(" matricula: %d \n", pessoa[a].Matricula);
  	printf("\n\n");
	for(i = 0; i < N - 1; i++){
		menor = i;
		for(j = i+1; j < N; j++){
			if(V[j].Matricula < V[menor].Matricula)
				menor = j;
		}
		if(i != menor){
			troca.Matricula = V[i].Matricula;
			V[i].Matricula = V[menor].Matricula;
			V[menor].Matricula = troca.Matricula;
		}
	}
	
	printf("ordenado\n");
	for (a = 0; a < 3; a++)
  	printf(" matricula: %d \n", pessoa[a].Matricula);
}

void selectionSortNota(struct Pessoa *V, int N){
	int i, j, menor, a;
	struct Pessoa troca;
	
		printf("nao ordenado \n");
	for (a = 0; a < 3; a++)
  	printf(" nota: %f \n", pessoa[a].Nota);
	
	for(i = 0; i < N - 1; i++){
		menor = i;
		for(j = i+1; j < N; j++){
			if(V[j].Nota < V[menor].Nota)
				menor = j;
		}
		if(i != menor){
			troca.Nota = V[i].Nota;
			V[i].Nota = V[menor].Nota;
			V[menor].Nota = troca.Nota;
		}
	}
	
	printf("ordenado \n");
	for (a = 0; a < 3; a++)
  	printf(" nota: %f \n", pessoa[a].Nota);
}

void selectionSortNome(struct Pessoa *V, int N){
	int i, j, menor, a;
	struct Pessoa troca;
	
		printf("nao ordenado \n");
	for (a = 0; a < 3; a++)
  	printf(" nome: %s \n", pessoa[a].Nome);
	
	for(i = 0; i < N - 1; i++){
		menor = i;
		for(j = i+1; j < N; j++){
			if(strcmp(V[j].Nome, V[menor].Nome)<0)
				menor = j;
		}
		if(i != menor){
			strcpy(troca.Nome, V[i].Nome);
			strcpy(V[i].Nome, V[menor].Nome);
			strcpy(V[menor].Nome, troca.Nome);
		}
	}
	
	printf("ordenado \n");
	for (a = 0; a < 3; a++)
  	printf(" nome: %s \n", pessoa[a].Nome);
}
inicializar();
int i, escolha;		
		printf("\n\n");
		printf("\t -----------------ordenacao selection sort-------------------- \n\n");

	do{
		printf(" \t escolha qual campo voce quer ordenar \n\n");
			printf("\t\t matricula tecle 1 \n");
			printf("\t\t nota tecle 2 \n");
			printf("\t\t nome tecle 3 \n");
			printf("\t\t tecle 4 para voltar ao menu inicial \n");
			printf("\t\t tecle 0 para sair \n");
			printf("\n\n");
		scanf("%d", &escolha);
		
			switch (escolha){
			case 1 :
			selectionSortMatricula(pessoa, 3);	
			break;
			
			case 2: 
			selectionSortNota(pessoa, 3);
			break;
			
			case 3 :
			selectionSortNome(pessoa, 3);
			break;
			
			case 4 :
				menu();
			break;
			
			default :
				printf("saindo");
		}
	} while (escolha!=0);
}
	
	void menu() {
			int escolha;		
			printf("\t escolha qual tipo de ordenacao voce quer usar \n\n");
			printf("\t\t bubble sort tecle 1 \n");
			printf("\t\t selection sort tecle 2 \n");
			printf("\t\t insertion sort 3 \n");
			
		scanf("%d", &escolha);
		switch (escolha){
			case 1 :
			ordenacaoBubbleSort();	
			break;
			
			case 2: 
			ordenacaoSelectionSort();
			break;
			
			case 3 :
			printf("insertion sort");
			break;
			
			default :
				printf("valor invalido");
		}
	}	

int main() {
		menu();
	
	getch();
	return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
void ordenacaoBubbleSort(){
	//criação da estrutura e do vetor da estrutura
	struct Pessoa{
     int Matricula;
     char Nome[30];
     float Nota;
};struct Pessoa pessoas[3];

// insere os valores nos campos da estrutura
void inicializar(){
	pessoas[0].Matricula = 5;
	strcpy(pessoas[0].Nome,"henrique");
	pessoas[0].Nota = 6;

	pessoas[1].Matricula = 4;
	strcpy(pessoas[1].Nome,"jose");
	pessoas[1].Nota = 5;

	pessoas[2].Matricula = 6;
	strcpy(pessoas[2].Nome,"artur");
	pessoas[2].Nota = 7;
}
//faz a ordenação no campo matricula
void bubbleSortMatricula (struct Pessoa *V, int N){
	int i;
	//imprime o vetor não ordenado
	printf("\n");
	printf("\t nao ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t matricula: %d \n", pessoas[i].Matricula);
    		
	printf("\n");
	int  continua,  fim = N;
	struct Pessoa aux;
	do {
		
		continua = 0;
		for(i = 0; i < fim-1; i++){
			if(V[i].Matricula > V[i+1].Matricula){
				aux.Matricula = V[i].Matricula;
				V[i].Matricula = V[i+1].Matricula;
				V[i+1].Matricula = aux.Matricula;
				continua = i;					
			}	
		}		
		fim--;
	}while(continua != 0);
	//imprime o vetor ordenado
	printf("\n");
	printf("\t ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t matricula: %d \n", pessoas[i].Matricula);
    		
	printf("\n");
}
	
void bubbleSortNota (struct Pessoa *V, int N){
	int i;
	printf("\n");
	printf("\t nao ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t nota: %2.f \n", pessoas[i].Nota);
	
	printf("\n");
	int continua,  fim = N;
	struct Pessoa aux;
	do {
		continua = 0;
		for(i = 0; i < fim-1; i++){
			if(V[i].Nota > V[i+1].Nota){
				aux.Nota = V[i].Nota;
				V[i].Nota = V[i+1].Nota;
				V[i+1].Nota = aux.Nota;
				continua = i;					
			}	
		}		
		fim--;
	}while(continua != 0);
	printf("\n");
	printf("\t ordenado \n\n");	
	for(i = 0; i < 3; i++)
    	printf("\t nota: %2.f \n", pessoas[i].Nota);
	
	printf("\n");
}
void bubbleSortNome (struct Pessoa *V, int N){
	int i;
	printf("\n");
	printf("\t nao ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf("\t nome: %s \n", pessoas[i].Nome);
    		
    printf("\n");
	int  continua,  fim = N;
	struct Pessoa aux;
	do {
		continua = 0;
		for(i = 0; i < fim-1; i++){
		if (strcmp(V[i].Nome, V[i+1].Nome) > 0){
                strcpy(aux.Nome, V[i].Nome);
                strcpy(V[i].Nome, V[i+1].Nome);
                strcpy(V[i+1].Nome, aux.Nome);
                continua = i; 
            }
		}		
		fim--;
	}while(continua != 0);
	printf("\n");
	printf("\t ordenado \n\n");
	for(i = 0; i < 3; i++)
    	printf(" \t nome: %s \n", pessoas[i].Nome);
    		
	printf("\n");	
}
inicializar();
int i, escolha;		

	do{
		printf(" \t escolha qual campo voce quer ordenar \n\n");
			printf("\t\t matricula tecle 1 \n");
			printf("\t\t nota tecle 2 \n");
			printf("\t\t nome tecle 3 \n");
			printf("\t\t tecle 4 para voltar ao menu inicial \n");
			printf("\t\t tecle 0 para sair \n");
		scanf("%d", &escolha);
		
			switch (escolha){
			case 1 :
			bubbleSortMatricula(pessoas, 3);	
			break;
			
			case 2: 
			bubbleSortNota(pessoas, 3);
			break;
			
			case 3 :
			bubbleSortNome(pessoas, 3);
			break;
			
			case 4 :
				menu();
			break;
			
			default :
				printf("saindo");
		}
	} while (escolha!=0);
}
	void menu() {
			int escolha;		
			printf("\t escolha qual tipo de ordenacao voce quer usar \n\n");
			printf("\t\t bubble sort tecle 1 \n");
			printf("\t\t insertion sort 2 \n");
			printf("\t\t selection sort tecle 3 \n");
		scanf("%d", &escolha);
		switch (escolha){
			case 1 :
			ordenacaoBubbleSort();	
			break;
			
			case 2: 
			printf("insertion sort");
			break;
			
			case 3 :
			printf("selection sort");
			break;
			
			default :
				printf("valor invalido");
		}
	}
int main(int argc, char *argv[]) {
		menu();
	
	getch();
	return 0;
}
>>>>>>> 69709476c85dc81af704d0f66e41323d151d555c
