#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal pra poder come�ar
int main()
{
     setlocale(LC_ALL, "Portuguese_Brazil");
    // Vari�veis
    int a, b;
    char op;
    // Escolha dos n�meros e opera��es
    printf("Digite um n�mero: ");
    scanf("%d", &a);
    printf("Digite outro n�mero: ");
    scanf("%d", &b);
    printf("Escolha a opera��o que deseja fazer(A=SOMA/S-SUBTRA��O/M-MULTIPLICA��O/D-DIVIS�O): ");
    scanf(" %c", &op);

    // Condi��es para realizar determinada opera��o
        if (op == 'A')
        {   
            printf("A soma entre %d e %d � igual a %d", a, b, a + b);
        }
        else if (op == 'S')
        {
            printf("A subtra��o entre %d e %d � igual a %d", a, b, a - b);
        }
        else if (op == 'M')
        {
            printf("A multplica��o entre %d e %d � igual a %d", a, b, a * b);
        }
        else if (op == 'D' && b!=0){ // Conectivos: && (AND - UMA FALSA J� SAI DO BLOCO) || (OR - UMA VERDADEIRA JA ENTRA NO BLOCO)
           printf("A divis�o entre %d e %d � igual a %d", a, b, a / b);
        } else {
            printf("Opera��o inv�lida\n");
        }
            return 0;  
} 


