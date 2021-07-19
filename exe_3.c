/*
Implemente em linguagem C, algoritmo que receba números para uma matriz. O
usuário deve determinar o tamanho da matriz (o tamanho de linhas e colunas
devem ser iguais). Exiba para o usuário somente os números positivos. No lugar
dos números negativos imprima o carácter '#'.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {   

    int tam;

    printf("\nInforme o tamanho da matriz: ");
    scanf("%d", &tam);

    int mat[tam][tam];

    printf("\nValores para a matriz:\n");
    for (int i = 0; i < tam; i++)

        for (int j = 0; j < tam; j++) {

            printf("Linha %d, coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);

        }

    printf("\nImprimindo a matriz (soh positivos):\n");
    for (int i = 0; i < tam; i++) {

        for (int j = 0; j < tam; j++) {

            if (mat[i][j] >= 0)

                printf("%d ", mat[i][j]);

            else

                printf("# ");

        }

        printf("\n");

    }
    
    printf("\n");
    
    return 0;
    
}
