/*
Implemente em linguagem C, algoritmo que solicite o nome de uma pessoa, como
saída, exiba a soma das letras do nome com base na tabela ASCII;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char nome[50];
    int soma = 0;

    printf("\nInforme seu nome: ");
    fgets(nome, 50, stdin);
    strtok(nome, "\n"); // A função strtok() divide uma string em tokens específicos, nesse caso o token "\n", ou seja, irá retirar o Enter da string

    for (int i = 0; nome[i] != '\0'; ++i)

        soma += nome[i];

    printf("\nSoma das letras do nome \"%s\": %d\n\n", nome, soma);
    
    return 0;
    
}
