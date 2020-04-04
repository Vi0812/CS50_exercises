#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int soma, subtracao, multiplicacao, num1, num2;
    float divisao;

    printf("Digite o primeiro numero: \n");
    scanf ("%d",&num1);

    printf("Digite o segundo numero: \n");
    scanf ("%d",&num2); // lê teclado e armaneza o inteiro em num2;


        soma = num1 + num2;
        subtracao = num1 - num2;
        divisao = num1 / num2;
        multiplicacao = num1 * num2;


    printf ("soma: %d\n", soma);
    printf ("subtracao: %d\n", subtracao);
    printf ("divisao: %.3f\n", divisao);
    printf ("multiplicacao: %d\n", multiplicacao);

    getchar();
    scanf("c\n");
}
