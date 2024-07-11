#include <stdio.h>

void toh(int n, int source, int aux, int dest)
{
    if(n == 1)
    {
        //pick and place
        printf("Move the disk from %d to %d\n", source, dest);
        return;
    }

    toh(n-1, source, dest, aux);
    toh(1, source, aux, dest);
    toh(n-1, aux, source, dest);
}

int main()
{
    toh(3, 1, 2, 3);



    return 0;
}
