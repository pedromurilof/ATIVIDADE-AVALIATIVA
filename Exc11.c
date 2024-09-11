#include <stdio.h>

// Função para calcular o desconto de ICMS
float calcularDescontoICMS(float valorProduto) {
    float desconto = 0.0;

    if (valorProduto <= 1000.00) {
        desconto = valorProduto * 0.05; // 5% de desconto
    } else if (valorProduto <= 5000.00) {
        desconto = valorProduto * 0.10; // 10% de desconto
    } else {
        desconto = valorProduto * 0.15; // 15% de desconto
    }

    return desconto;
}

int main() {
    float valorProduto, descontoICMS;

    // Solicita ao usuário o valor do produto
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valorProduto);

    // Calcula o valor do desconto de ICMS
    descontoICMS = calcularDescontoICMS(valorProduto);

    // Exibe o valor do desconto
    printf("O valor do desconto de ICMS e: R$ %.2f\n", descontoICMS);

    return 0;
}




