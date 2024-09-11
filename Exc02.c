#include <stdio.h>

void verificarAnoBissexto(int ano) {
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("1\n");
    }
}

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    verificarAnoBissexto(ano);

    return 0;
}