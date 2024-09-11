#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    // Exibe as opções de operação
    printf("Calculadora Simples\n");
    printf("Escolha a operacao:\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("Digite o numero da operacao desejada: ");
    scanf("%d", &opcao);

    // Solicita os dois números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Realiza a operação com base na opção escolhida
    switch(opcao) {
        case 1: // Soma
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2: // Subtração
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3: // Multiplicação
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4: // Divisão
            if (num2 != 0) { // Verifica se o divisor é diferente de zero
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default: // Caso a operação não seja reconhecida
            printf("Erro: Operacao invalida.\n");
            break;
    }

    return 0;
}

