#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main ()

{
int f, a, e;

cout << ("Digite a altura da pirâmide:\n");
cin >> a;

    for (f = 1; f < a+1; f++)
    {
        for (e = 0; e < a-f; e++)
        {
            printf(" ");
        }
               for (int h = 0; h < f; h++)
        {
                printf ("#");
        }
                printf(" ");

                for (int h = 0; h < f; h++)
        {
                printf ("#");
        }

                printf("\n");
        }

    return (0);
    }



