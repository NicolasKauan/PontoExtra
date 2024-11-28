#include <stdio.h>



int main() {
    int vet[5];
    int i,j,aux;
    for (int i = 0; i < 5; i++){//entrada de dados
        printf("Informe o %d numero do vetor: ",i+1);
        scanf("%d", &vet[i]);
    }


    // Algoritmo de Insertion Sort
    for (i = 1; i < 5; i++) {
        j = i; // Inicia a comparação a partir do índice atual
        while (j > 0 && vet[j] < vet[j - 1]) { // Enquanto o elemento atual for menor que o anterior
            aux = vet[j]; // Armazena o elemento atual
            vet[j] = vet[j - 1]; // Move o elemento anterior para a frente
            vet[j - 1] = aux; // Coloca o elemento atual na posição correta
            j--; // Volta para verificar os elementos anteriores
        }
    }

    printf("Vetor ordenado: ");//saida de dados, ou, apresentação para o usuário
    for (int i = 0; i < 5; i++){
        printf("%d, ",vet[i]);
    }


    return 0 ;
}