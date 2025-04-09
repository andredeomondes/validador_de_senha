#include <stdio.h>
#include "validador.h"

int main() {
    char senha[100];
    char opcao;
    int continuar = 1;

    while (continuar) {
        printf("\n===========================================\n");
        printf("|         SISTEMA VALIDADOR DE SENHA       |\n");
        printf("===========================================\n\n");

        exibirRegras();

        printf("Digite a senha para validacao: ");
        scanf("%s", senha);

        if (validarSenha(senha)) {
            printf("\n-------------------------------------------\n");
            printf("|            SENHA VALIDA                 |\n");
            printf("-------------------------------------------\n");
        } else {
            printf("\n-------------------------------------------\n");
            printf("|           SENHA INVALIDA                |\n");
            printf("-------------------------------------------\n");
        }

        printf("\nDeseja testar outra senha? (s/n): ");
        scanf(" %c", &opcao);

        if (opcao != 's' && opcao != 'S') {
            continuar = 0;
            printf("\nEncerrando o programa...\n");
        }
    }

    return 0;
}
