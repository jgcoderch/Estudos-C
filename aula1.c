#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    float n1, n2, soma;
    setlocale(LC_ALL,"");
    // pede para o usuário digitar o valor ----> entrada primeiro e segundo numero
    // recebe e guarda os valores nas variaveis com scanf

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    // soma os valores guardados e atribui esse resultado a uma variavel
    soma = n1 + n2;

    // exibe o resultado na tela
    printf("O resultado da soma entre o primeiro e segundo valor resulta em: %.2f", soma);
    return 0;

}
