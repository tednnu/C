#include <stdio.h>

double rea(double tar[], int len);

int main()
{
	int i,len;
	const double sou[]={6, 5, 24, 6, 55, 2, 3, 6, 95, 25, 1, 17, 1, 45, 63 };
	
	len = sizeof sou / sizeof sou[0];
	rea(sou, len);
	for(i=0;i<len;i++)
		printf("%.1f ",sou[i]);
	printf("\n");
}
double rea(double sou[], int len)
{
	int i = 0;
	printf("%d\n",len);
	double new[len];
	for(i=0;i<len;i++)
	{
		new[i]=sou[len-i-1];
	}
	for(i=0;i<len;i++)
	{
		sou[i]=new[i];
	}
	return sou[len];
}