#include <stdio.h>

void replicar (int n);

int main(void)

{
   replicar(5);
    return (0);
}

void replicar (int n)

{
    for (int i = 0; i < n;  i++)
    {
        printf ("Hello.World\n");
    }
}
