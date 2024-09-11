#include <stdio.h>

int main() {
    float nota;

    // Solicita a nota final ao usuário
    printf("Informe a nota final do aluno (0 a 10): ");
    scanf("%f", &nota);

    // Verifica se a nota está dentro do intervalo válido
    if (nota < 0 || nota > 10) {
        printf("Erro: Nota invalida. A nota deve estar entre 0 e 10.\n");
    } else {
        // Classifica a nota com base nas faixas
        if (nota >= 9.0) {
            printf("Classificacao: A\n");
        } else if (nota >= 7.0) {
            printf("Classificacao: B\n");
        } else if (nota >= 5.0) {
            printf("Classificacao: C\n");
        } else {
            printf("Classificacao: D\n");
        }
    }

    return 0;
}



