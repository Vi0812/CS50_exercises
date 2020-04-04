#include <stdio.h>


int main()
{
char sexo;

while (1)
{
    printf("Introduza o sexo do invididuo:   ");
scanf(" %c",&sexo);
if (sexo == 'm' || sexo == 'M' )
   printf("O individuo recebe 1000 euro de mesada \n");
else
   printf("O individuo recebe 1500 euro de mesada \n");

}

}
