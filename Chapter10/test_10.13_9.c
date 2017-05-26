#include <stdio.h>
#define m 5

double cop(double sou[][m], double des[][m],int n);
void pri(double sou[][m],int n);

int main()
{
	double sou[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	double des[3][5];
	cop(sou,des,3);
	pri(des,3);
	return 0;
}

double cop(double sou[][m], double des[][m],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			des[i][j]=sou[i][j];
	}
	return des[n][n];
}
void pri(double sou[][m],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%.1f ",sou[i][j]);
		printf("\n");
	}
}