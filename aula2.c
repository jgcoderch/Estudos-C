#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal pra poder começar
int main()
{
     setlocale(LC_ALL, "Portuguese_Brazil");
    // Variáveis
    int a, b;
    char op;
    // Escolha dos números e operações
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("Escolha a operação que deseja fazer(A=SOMA/S-SUBTRAÇÃO/M-MULTIPLICAÇÃO/D-DIVISÃO): ");
    scanf(" %c", &op);

    // Condições para realizar determinada operação
        if (op == 'A')
        {   
            printf("A soma entre %d e %d é igual a %d", a, b, a + b);
        }
        else if (op == 'S')
        {
            printf("A subtração entre %d e %d é igual a %d", a, b, a - b);
        }
        else if (op == 'M')
        {
            printf("A multplicação entre %d e %d é igual a %d", a, b, a * b);
        }
        else if (op == 'D' && b!=0){ // Conectivos: && (AND - UMA FALSA JÁ SAI DO BLOCO) || (OR - UMA VERDADEIRA JA ENTRA NO BLOCO)
           printf("A divisão entre %d e %d é igual a %d", a, b, a / b);
        } else {
            printf("Operação inválida\n");
        }
            return 0;  
} 


