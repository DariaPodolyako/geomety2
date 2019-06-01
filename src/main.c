#include "foo.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i;
    float r, x, y, s, p, pere;
    printf("enter the number of shapes=");
    scanf("%d", &n);
    float A[n];
    float X[n];
    float Y[n];
    for (i = 1; i <= n; i++) 
    {
        printf("\n %d.circle=", i);
        scanf("%f %f %f", &x, &y, &r);
    X[i] = x;
    Y[i] = y;
    A[i] = r;
    }
    for (i = 1; i <= n-1; i++) 
    {
        s = square(A[i]);
        p = per(A[i]);
        pere = peres(A[i], X[i], Y[i], A[i+1], X[i+1], Y[i+1]);
        printf("\n %d.square=(%1.2f)", i, s);
        printf("\n %d.per=(%1.2f)", i, p);
        printf("\n %d,%d.peres=(%1.2f)", i, (i+1), pere);
    }
    return 0;
}
