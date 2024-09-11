#include <stdio.h>



int main() {
    double a, b, c;

    printf("Digite os três lados do triângulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    verificarTrianguloRetangulo(a, b, c);

    return 0; 
}
void verificarTrianguloRetangulo(double a, double b, double c) {

    double hipotenusa = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    double lado1 = (a == hipotenusa) ? (b >= c ? b : c) : (b == hipotenusa) ? (a >= c ? a : c) : (a >= b ? a : b);
    double lado2 = (a == hipotenusa) ? (b <= c ? b : c) : (b == hipotenusa) ? (a <= c ? a : c) : (a <= b ? a : b);

    
    if (hipotenusa * hipotenusa == lado1 * lado1 + lado2 * lado2) {
        printf("O triângulo é retângulo.\n");
    }
}