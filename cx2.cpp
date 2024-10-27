#include<stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf",&a);
	c=(int)(a*100+0.5);
	b=c/100.0;
	printf("%f\n",b);
	return 0;
}
