#include <stdio.h>

int main() {
    int turno;

    // Solicita ao usuário o turno do dia
    printf("Informe o turno do dia:\n");
    printf("1 - Manha\n");
    printf("2 - Tarde\n");
    printf("3 - Noite\n");
    printf("Digite o numero correspondente ao turno: ");
    scanf("%d", &turno);

    // Verifica o turno e exibe a mensagem apropriada
    switch(turno) {
        case 1:
            printf("Bom dia!\n");
            break;
        case 2:
            printf("Boa tarde!\n");
            break;
        case 3:
            printf("Boa noite!\n");
            break;
        default:
            printf("Erro: turno invalido.\n");
            break;
    }

    return 0;
}


