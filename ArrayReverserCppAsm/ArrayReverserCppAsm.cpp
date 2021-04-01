
#include <iostream>

extern "C" void Reverser(int* y, const int* x, int n);

int main()
{
    const int n = 10;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = i;
    }

    Reverser(y, x, n);

    printf("\nArray Reverser-----------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("y: %5d     x: %d\n", y[i], x[i]);
    }

    return 0;
}

