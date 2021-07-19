/*
Implemente em linguagem C, algoritmo que solicite dois nomes A e B, verifique se
os nomes são iguais (não utilize funções definidas em bibliotecas).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void) {   

    char A[50], B[50];
    bool flag = false; // Variável do tipo de dado lógico bool

    printf("\nInforme o 1º nome: ");
    fgets(A, 50, stdin);
    strtok(A, "\n");

    printf("Informe o 2º nome: ");
    fgets(B, 50, stdin);
    strtok(B, "\n");

    for (int i = 0; A[i] != '\0' || B[i] != '\0'; i++) // Enquanto o nome A ou o nome B não chegarem ao fim

        if (A[i] != B[i]) {

            flag = true; // Se os nomes forem diferentes, flag se torna true e o laço é encerrado no break
            break;

        }

    if (flag == false)

        printf("\nOs nomes sao iguais!\n\n");

    else

        printf("\nOs nomes sao diferentes!\n\n");
        
    return 0;
    
}
