#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char nome[50];
    int soma = 0;

    printf("\nInforme seu nome: ");
    fgets(nome, 50, stdin);
    strtok(nome, "\n");

    for (int i = 0; nome[i] != '\0'; ++i)

        soma += nome[i];

    printf("\nSoma das letras do nome \"%s\": %d\n\n", nome, soma);
    
    return 0;
    
}
