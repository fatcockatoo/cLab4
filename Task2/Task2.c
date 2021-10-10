#include <stdio.h>
#include <math.h>

void writeArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
        printf("%d ", arr[i]);
    }
}

void main()
{
    int n;
    int arr[100];
    scanf_s("%d", &n);
    writeArray(&arr, n);
}


