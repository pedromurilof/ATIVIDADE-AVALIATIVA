#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (verificarTriangulo(lado1, lado2, lado3)) {
        printf("Os lados formam um triângulo válido.\n");
    } else {
        printf("Os lados não formam um triângulo válido.\n");
    }

    return 0;
}