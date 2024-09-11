#include <stdio.h>

void verificarPrimo(int num) {
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        printf("1\n");
    }
}

int main() {
    int num;
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &num);
    verificarPrimo(num);

    return 0;
}