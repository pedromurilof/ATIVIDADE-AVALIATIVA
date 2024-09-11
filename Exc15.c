#include <stdio.h>

int main() {
    int moeda_origem, moeda_destino;
    float valor, convertido;

    // Exibe as opções de moedas
    printf("Conversor de Moedas\n");
    printf("Escolha a moeda de origem:\n");
    printf("1 - BRL (Real)\n");
    printf("2 - USD (Dolar)\n");
    printf("3 - EUR (Euro)\n");
    printf("Digite o numero da moeda de origem: ");
    scanf("%d", &moeda_origem);

    printf("Escolha a moeda de destino:\n");
    printf("1 - BRL (Real)\n");
    printf("2 - USD (Dolar)\n");
    printf("3 - EUR (Euro)\n");
    printf("Digite o numero da moeda de destino: ");
    scanf("%d", &moeda_destino);

    // Solicita o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Realiza a conversão de acordo com a moeda de origem e destino
    if (moeda_origem == 1 && moeda_destino == 2) {
        convertido = valor * 0.19; // BRL para USD
        printf("Valor convertido: %.2f USD\n", convertido);
    } else if (moeda_origem == 1 && moeda_destino == 3) {
        convertido = valor * 0.16; // BRL para EUR
        printf("Valor convertido: %.2f EUR\n", convertido);
    } else if (moeda_origem == 2 && moeda_destino == 1) {
        convertido = valor * 5.30; // USD para BRL
        printf("Valor convertido: %.2f BRL\n", convertido);
    } else if (moeda_origem == 2 && moeda_destino == 3) {
        convertido = (valor * 5.30) / 6.20; // USD para EUR via BRL
        printf("Valor convertido: %.2f EUR\n", convertido);
    } else if (moeda_origem == 3 && moeda_destino == 1) {
        convertido = valor * 6.20; // EUR para BRL
        printf("Valor convertido: %.2f BRL\n", convertido);
    } else if (moeda_origem == 3 && moeda_destino == 2) {
        convertido = (valor * 6.20) / 5.30; // EUR para USD via BRL
        printf("Valor convertido: %.2f USD\n", convertido);
    } else if (moeda_origem == moeda_destino) {
        printf("Moeda de origem e destino sao as mesmas. Valor: %.2f\n", valor);
    } else {
        printf("Erro: Conversao invalida.\n");
    }

    return 0;
}


