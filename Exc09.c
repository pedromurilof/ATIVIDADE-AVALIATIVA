#include <stdio.h>

void calcularIRRF(float salario) {
    float imposto;

    if (salario <= 2112.00) {
        printf("Isento de imposto.\n");
    } else if (salario <= 2826.65) {
        imposto = salario * 0.075 - 158.40;
    } else if (salario <= 3751.05) {
        imposto = salario * 0.15 - 370.40;
    } else if (salario <= 4664.68) {
        imposto = salario * 0.225 - 651.73;
    } else {
        imposto = salario * 0.275 - 884.96;
    }

    if (salario > 2112.00) {
        printf("O imposto a ser pago é: R$ %.2f\n", imposto);
    }
}

int main() {
    float salario;
    printf("Digite o salário bruto: R$ ");
    scanf("%f", &salario);
    calcularIRRF(salario);
    return 0;
}




