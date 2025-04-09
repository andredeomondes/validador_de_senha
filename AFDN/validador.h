#ifndef VALIDADOR_H
#define VALIDADOR_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Verifica se o caractere é um dos especiais permitidos */
static int ehEspecial(char c) {
    return c == '!' || c == '@' || c == '#' || c == '$' ||
           c == '%' || c == '^' || c == '&' || c == '*';
}

/* Exibe as regras para formacao da senha */
static void exibirRegras() {
    printf("=========================================\n");
    printf("|       REGRAS PARA A SENHA (AFND)      |\n");
    printf("=========================================\n");
    printf("A senha deve conter pelo menos:\n");
    printf("- 1 letra maiuscula (A-Z)\n");
    printf("- 1 letra minuscula (a-z)\n");
    printf("- 1 caractere especial (! @ # $ %% ^ & *)\n");
    printf("- 8 caracteres no total ou mais\n");
    printf("Pode estar em qualquer ordem!\n");
    printf("Exemplo valido: aB@123xy\n");
    printf("=========================================\n\n");
}

/* Valida a senha com base em um automato finito não-determinístico */
static int validarSenha(const char *senha) {
    int tem_maiuscula = 0;
    int tem_minuscula = 0;
    int tem_especial = 0;
    int tamanho = strlen(senha);

    for (int i = 0; i < tamanho; i++) {
        if (isupper(senha[i])) tem_maiuscula = 1;
        else if (islower(senha[i])) tem_minuscula = 1;
        else if (ehEspecial(senha[i])) tem_especial = 1;
    }

    return tem_maiuscula && tem_minuscula && tem_especial && tamanho >= 8;
}

#endif
