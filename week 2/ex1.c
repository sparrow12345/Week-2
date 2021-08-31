#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	int a=INT_MAX;
	float b=FLT_MAX;
	double c=DBL_MAX;
	printf("%lu, %d\n",sizeof(int),a);
    printf("%lu, %f\n",sizeof(float),b);
    printf("%lu, %lf\n",sizeof(double),c);
	return 0;
}
