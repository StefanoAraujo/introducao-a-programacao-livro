#include <stdio.h>

int main() {
    char semana;
    
    scanf("%i%*c", &semana);
    
    switch (semana) {
    case 1:
        printf("domingo");
        break;
    case 2:
        printf("segunda-feira");
        break;
    case 3:
        printf("ter�a-feira");
        break;
    case 4:
        printf("quarta-feira");
        break;
    case 5:
        printf("quinta-feira");
        break;
    case 6:
        printf("s�bado");
        break;
    default:
        printf("dia da semana inv�lido");
        break;
    }
    
    getchar();
    return 0;
}

