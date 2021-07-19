/*
Implemente em linguagem C, algoritmo que determine a matriz resultante da
subtração de duas matrizes. O usuário deve determinar o tamanho da matriz (o
tamanho de linhas e colunas devem ser iguais). O usuário deve informar os
valores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {   
    
    int tam;

    printf("\nInforme o tamanho das matrizes: ");
    scanf("%d", &tam);

    int m1[tam][tam], m2[tam][tam], m3[tam][tam];

    printf("\nValores para a 1ª matriz:\n");
    for (int i = 0; i < tam; i++)

        for (int j = 0; j < tam; j++) {

            printf("Linha %d, coluna %d: ", i, j);
            scanf("%d", &m1[i][j]);

        }

    printf("\nValores para a 2ª matriz:\n");
    for (int i = 0; i < tam; i++)

        for (int j = 0; j < tam; j++) {

            printf("Linha %d, coluna %d: ", i, j);
            scanf("%d", &m2[i][j]);

        }

    printf("\nMatriz resultante da subtracao das duas matrizes:\n");
    for (int i = 0; i < tam; i++) {

        for (int j = 0; j < tam; j++) {

            m3[i][j] = m1[i][j] - m2[i][j];

            printf("%d ", m3[i][j]);

        }

        printf("\n");

    }
    
    printf("\n");
    
    return 0;
    
}
