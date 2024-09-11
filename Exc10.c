#include <stdio.h>

// Função para calcular a contribuição ao INSS
float calcularINSS(float salarioBruto) {
    float inss = 0.0;

    if (salarioBruto <= 1320.00) {
        inss = salarioBruto * 0.075;
    } else if (salarioBruto <= 2571.29) {
        inss = (1320.00 * 0.075) + ((salarioBruto - 1320.00) * 0.09);
    } else if (salarioBruto <= 3856.94) {
        inss = (1320.00 * 0.075) + ((2571.29 - 1320.00) * 0.09) + ((salarioBruto - 2571.29) * 0.12);
    } else if (salarioBruto <= 7507.49) {
        inss = (1320.00 * 0.075) + ((2571.29 - 1320.00) * 0.09) + ((3856.94 - 2571.29) * 0.12) + ((salarioBruto - 3856.94) * 0.14);
    } else {
        inss = (1320.00 * 0.075) + ((2571.29 - 1320.00) * 0.09) + ((3856.94 - 2571.29) * 0.12) + ((7507.49 - 3856.94) * 0.14);
    }

    return inss;
}

int main() {
    float salarioBruto, valorINSS;

    // Solicita ao usuário o salário bruto
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salarioBruto);

    // Calcula o valor da contribuição ao INSS
    valorINSS = calcularINSS(salarioBruto);

    // Exibe o valor do INSS
    printf("A contribuicao ao INSS e: R$ %.2f\n", valorINSS);

    return 0;
}




