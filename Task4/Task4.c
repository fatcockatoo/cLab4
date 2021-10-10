#include <stdio.h>
#include <math.h>

void sort(int* arr, int n)
{
    int t, m;
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = rand();
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        m = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < arr[m])
                m = j;
        }
        t = arr[i];
        arr[i] = arr[m];
        arr[m] = t;
        printf("%d ", arr[i]);
    }
}

void main()
{
    int n;
    int arr[100];
    scanf_s("%d", &n);
    sort(&arr, n);
}



