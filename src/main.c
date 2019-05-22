#include "foo.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i, x, y;
    float r, s, p;
    printf("enter the number of shapes=");
    scanf("%d", &n);
    float A[n];
    float X[n];
    float Y[n];
    for (i = 1; i <= n; i++) {
        printf("\n %d.circle=", i);
        scanf("%d %f %d %d", &i, &x, &y, &r);
	X[i] = x;
	Y[i] = y;
	A[i] = r;
    }

    for (i = 1; i <= n; i++) {
        s = square(A[i]);
        p = per(A[i]);
        printf("\n %d.square=(%1.2f)", i, s);
        printf("\n %d.per=(%1.2f)", i, p);
    }

    return 0;
}
