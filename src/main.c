#include "foo.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float r, s, p;
    printf("enter the number of shapes=");
    scanf("%d", &n);
    float A[n];
    for (i = 1; i <= n; i++) {
        printf("\n %d.circle=", i);
        scanf("%d %f", &i, &r);
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
