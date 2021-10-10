#include <stdio.h>
#include <math.h>

void f(const double *x, double *result) 
{
    *result = pow(((*x + 3) / (*x - 3)), 0.5);
}

void main()
{
    double result, x = 5;
    f(&x,&result);
    printf("%lf\n", result);
    x = 3.0051;
    f(&x, &result);
    printf("%lf\n", result);
}


