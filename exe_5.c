/*
Implemente em linguagem C, algoritmo que solicite uma frase e exiba na tela a
quantidade de letras (caracteres) utilizadas na frase (não utilize funções definidas
em bibliotecas).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {   

    int i;
    char frase[50];

    printf("\nInforme uma frase: ");
    fgets(frase, 50, stdin);
    strtok(frase, "\n");

    for (i = 0; frase[i] != '\0'; i++) {}

    printf("\nTamanho da frase \"%s\": %d\n\n", frase, i);
    
    return 0;
    
}


