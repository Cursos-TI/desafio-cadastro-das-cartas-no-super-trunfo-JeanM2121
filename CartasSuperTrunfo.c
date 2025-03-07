#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo[20];
    char cidade[20];
    int população;
    float area;
    float Pib;
    int pontos;

    printf("digite o estado: ");
    scanf("%c", &estado);
    printf("o estado é: %c", estado);

    printf("digite o codigo: ");
    scanf("%s", &codigo);
    printf("o codigo é: %s\n", codigo);

    printf("digite a cidade: ");
    scanf("%s", &cidade);
    printf("a cidade é: %s\n", cidade);

    printf("digite a população: ");
    scanf("%d", &população);
    printf("a população é: %d\n", população);

    printf("digite a area: ");
    scanf("%f", &area);
    printf("a area é: %f\n", area);

    printf("digite o Pib: ");
    scanf("%f", &Pib);
    printf("o Pib é: %f\n", Pib);

    printf("digite os pontos: ");
    scanf("%d", &pontos);
    printf("os pontos são: %d\n", pontos);
    
    return 0;
}
