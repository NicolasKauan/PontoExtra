#include <stdio.h>



int main() {
    int vet[5];
    int i,j,aux;
    for (int i = 0; i < 5; i++){//entrada de dados
        printf("Informe o %d numero do vetor: ",i+1);
        scanf("%d", &vet[i]);
    }

    //Algoritmo de Bubble Sort
    for (i = 0; i < 4; i++) { // O laço externo controla o número de passagens
        for (j = 0; j < 4 - i; j++) { // O laço interno compara elementos adjacentes
            if (vet[j] > vet[j + 1]) { // Se o elemento atual for maior que o próximo
                aux = vet[j]; // Armazena o elemento atual
                vet[j] = vet[j + 1]; // Move o próximo elemento para a posição atual
                vet[j + 1] = aux; // Coloca o elemento armazenado na posição seguinte
            }
        }
    }

    printf("Vetor ordenado: ");//saida de dados, ou, apresentação para o usuário
    for (int i = 0; i < 5; i++){
        printf("%d, ",vet[i]);
    }


    return 0 ;
}