#include <stdio.h>

void verificarParOuImpar(int numero) {
    printf("O número %d é %s.\n", numero, (numero % 2 == 0) ? "par" : "ímpar");
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    verificarParOuImpar(numero);
    return 0;
}
