#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void selection_sort(int num[], int tam){
	int aux,maior;
	for(int i=0; i < tam; i++){
		//salvar valor atual
		maior = i;		
		//omparar com os demais
		for(int j=(i + 1); j < tam; j++){ 
			if(num[j] > num[maior]){
				maior = j;
			}
		}
		//troca os valores
		if(i != maior){
			aux = num[i];
			num[i] = num[maior];
			num[maior] = aux;
		}
	}	
}


int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int tam=10;
	int idade[tam];
	
	for(int i=0; i < tam; i++){
		printf("Digite sua idade: ");
		scanf("%d", &idade[i]);
	}
	 selection_sort(idade,tam);
	 
	 printf("\nIDADES ORDENADAS EM ORDEM DECRESCENTE : \n");
	 for(int i=0; i < tam; i++){
	 	printf("%d Anos\n", idade[i]);
	 }

	
	
	return 0;
}
