#include <stdio.h>
#include <math.h>

void f(const double* x, double* result)
{
    *result = pow(((*x + 3) / (*x - 3)), 0.5);
}

void task1()
{
    double result, x = 5;
    f(&x, &result);
    printf("%lf\n", result);
    x = 3.0051;
    f(&x, &result);
    printf("%lf\n", result);
}

void sortStackArray(int* arr, int n)
{
    int t, m;
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = rand() % 100;
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

void task5()
{
    int n = 15;
    int arr[15];
    sortStackArray(&arr, n);
}

