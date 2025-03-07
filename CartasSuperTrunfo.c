#include <stdio.h>

int main(){
    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float Pib;
    int pontos;

    printf("digite o estado: ");
    scanf("%c", &estado);
    printf("o estado é: %c\n", estado);

    printf("digite o codigo: ");
    scanf("%s", &codigo);
    printf("o codigo é: %s\n", codigo);

    printf("digite a cidade: ");
    scanf("%s", &cidade);
    printf("a cidade é: %s\n", cidade);

    printf("digite a populacao: ");
    scanf("%d", &populacao);
    printf("a populacao é: %d\n", populacao);

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