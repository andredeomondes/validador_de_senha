#ifndef VALIDADOR_H
#define VALIDADOR_H

#include <stdio.h>
#include <ctype.h>

static int ehEspecial(char c) {
    return c == '!' || c == '@' || c == '#' || c == '$' ||
           c == '%' || c == '^' || c == '&' || c == '*';
}

static void exibirRegras() {
    printf("=========================================\n");
    printf("|           REGRAS PARA A SENHA         |\n");
    printf("=========================================\n");
    printf("A senha deve conter exatamente:\n");
    printf("- 1 caractere especial no inicio (! @ # $ %% ^ & *)\n");
    printf("- 1 letra maiuscula (A-Z)\n");
    printf("- 4 letras minusculas (a-z)\n");
    printf("- 3 digitos numericos (0-9)\n");
    printf("- 1 caractere especial no final (! @ # $ %% ^ & *)\n");
    printf("Exemplo valido: !Senha123!\n");
    printf("=========================================\n\n");
}

static int validarSenha(const char *senha) {
    int estado = 0;
    int i = 0;

    while (senha[i] != '\0') {
        char c = senha[i];

        switch (estado) {
            case 0: if (ehEspecial(c)) estado = 1; else return 0; break;
            case 1: if (isupper(c)) estado = 2; else return 0; break;
            case 2: if (islower(c)) estado = 3; else return 0; break;
            case 3: if (islower(c)) estado = 4; else return 0; break;
            case 4: if (islower(c)) estado = 5; else return 0; break;
            case 5: if (islower(c)) estado = 6; else return 0; break;
            case 6: if (isdigit(c)) estado = 7; else return 0; break;
            case 7: if (isdigit(c)) estado = 8; else return 0; break;
            case 8: if (isdigit(c)) estado = 9; else return 0; break;
            case 9: if (ehEspecial(c)) estado = 10; else return 0; break;
            case 10: return 0; 
        }

        i++;
    }

    return estado == 10;
}

#endif
