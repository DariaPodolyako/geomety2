#include "foo.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float peres (float r, float x, float y, float r1, float x1, float y1)
{
     float z, d, pere;
		z=sqrt((pow((x-x1),2))+(pow((y-y1),2)));
		d=r+r1;
        pere = (d-z);
		if (pere < 0)
		    pere = 3;
		else if (pere == 0)
		    pere = 1;  
		else if (pere > 0)
		    pere = 2;
		return pere;
}
