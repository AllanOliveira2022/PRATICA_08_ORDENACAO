#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void selection_sort(int num[], int tam){
	int aux,min,i;
	for(int i=0; i < tam; i++){
		min = i;
		for(int j=(i + 1); j < tam; j++){
			if(num[j] < num[min]){
				min = j;
			}
		}
		if(i != min){
			aux = num[i];
			num[i] = num[min];
			num[min] = aux;
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
	 
	 printf("\nIDADES ORDENADAS EM ORDEM CRESCENTE : \n");
	 for(int i=0; i < tam; i++){
	 	printf("%d Anos\n", idade[i]);
	 }

	
	
	return 0;
}
