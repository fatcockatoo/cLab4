#include <stdio.h>
#include <math.h>

void readArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
        scanf_s("%d", &arr[i]);
    }
}

void main()
{
    int n;
    int arr[100];
    scanf_s("%d", &n);
    readArray(&arr, n);
}
