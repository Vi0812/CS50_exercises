#include <stdio.h>
int main()
{
   char sexo;
   do {
      scanf("\n Introduza o sexo do individuo: %c",&sexo);
      switch ( tolower(sexo) )
      {

         case 'm':printf("\n O individuo recebe 1000 euro de mesada");
         case 'f':printf("\n O individuo recebe 1500 euro de mesada");
         default : printf("\n Unknown command...");
      }
   } while ( sexo != 'x' );
}
