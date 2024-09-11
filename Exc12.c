#include <stdio.h>

double calcularIPTU(double valorVenal) {
    if (valorVenal <= 100000.00) return valorVenal * 0.01;  
    if (valorVenal <= 300000.00) return valorVenal * 0.015; 
    if (valorVenal <= 500000.00) return valorVenal * 0.02;  
    return valorVenal * 0.025;                              
}

int main() {
    double valorVenal;


    printf("Digite o valor venal do imóvel: R$ ");
    scanf("%lf", &valorVenal);


    printf("O valor do IPTU é: R$ %.2lf\n", calcularIPTU(valorVenal));

    return 0;
}
}




