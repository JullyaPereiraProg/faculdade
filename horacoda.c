#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;


    // Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Início do jogo (Exibição do menu)
    printf("Bem vindo ao Jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação!\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");  

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);  
        
    printf("Digite seu numero (entre 1 e 100): ");
    scanf("%d", &numeroJogador);  

    switch (tipoComparacao) {
        case 'M':
        case 'm':
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            printf("Você escolheu a opção maior\n");
            break;
        case 'N':
        case 'n':
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            printf("Você escolheu a opção menor\n");
            break;
        case 'I':
        case 'i':
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            printf("Você escolheu a opção igual\n");
            break;
        default:
            printf("Opção de jogo inválida\n");
            resultado = 0;  // Definir resultado como 0 para caso inválido
            break;
    }
        
    printf("O número do computador é: %d e o numeroJogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1) {
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }

    return 0;    
}