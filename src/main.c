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
    for (i = 0; i < n; i++) {
        printf("\n %d.circle=", i + 1);
        scanf("%d.circle(%f)", &i, &r);
        A[i] = r;
    }

    for (i = 0; i < n; i++) {
        s = square(A[i]);
        p = per(A[i]);
        printf("\n %d.square=(%1.2f)", i + 1, s);
        printf("\n %d.per=(%1.2f)", i + 1, p);
    }

    return 0;
}
