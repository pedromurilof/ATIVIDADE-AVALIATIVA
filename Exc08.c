#include <stdio.h>

void calcularImposto(float salario) {
    float imposto = (salario > 5000) ? salario * 0.20 : salario * 0.10;
    printf("O imposto a ser pago é: R$ %.2f\n", imposto);
}

int main() {
    float salario;
    printf("Digite o salário: R$ ");
    scanf("%f", &salario);
    calcularImposto(salario);
    return 0;
}




