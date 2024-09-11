#include <stdio.h>

void classificarNota(float nota) {

    if (nota < 0 || nota > 10) {
        printf("Nota inválida. A nota deve estar entre 0 e 10.\n");
        return;
    }
    if (nota >= 6) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado.\n");
    }
}

int main() {
    float nota;

    printf("Digite a nota do aluno (de 0 a 10): ");
    scanf("%f", &nota);

    classificarNota(nota);

    return 0;
}


