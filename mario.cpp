#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main ()

{
int i, e, n;

cout << ("Altura:\n");
cin >> n;

        for (e = 0; e < n; e++)
        {
            for (i = 0; i<n;i++)
            {
                printf("#");
            }
            printf ("\n");
        }

return (0);
}


