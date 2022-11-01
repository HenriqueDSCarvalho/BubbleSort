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
