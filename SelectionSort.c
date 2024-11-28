#include <stdio.h>



int main() {
    int vet[5];
    int i,j,aux;
    for (int i = 0; i < 5; i++){//entrada de dados
        printf("Informe o %d numero do vetor: ",i+1);
        scanf("%d", &vet[i]);
    }

    // Selection Sort
    for (i = 0; i < 4; i++){//usaremos dois laços de repetição por conta que iremos comparar o numero em i com todos os numeros depois dele
        for(j = i+1; j < 5; j++){//por conta disso usaremos o laço J que seu inicio começa um numero depois de i
            if(vet[i] > vet[j]){// se o numero que esta no vetor i for maior que o numero seguinte, ou seja, no vetor[j]
                aux = vet[i];//uma observação, usaremos o auxiliar para fazer a troca, voltando. Auxiliar ira receber o numero que esta em vet[i]
                vet[i] = vet[j];//vet[i] ira receber o que esta em vet[j]
                vet[j] = aux;// e por ultimo o que esta em vet[j] ira receber o numero que esta em auxiliar, assim, finalizando essa etapa
            }
        }
    }

    printf("Vetor ordenado: ");//saida de dados, ou, apresentação para o usuário
    for (int i = 0; i < 5; i++){
        printf("%d, ",vet[i]);
    }


    return 0 ;
}