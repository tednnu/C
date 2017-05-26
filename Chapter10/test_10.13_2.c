#include <stdio.h>

void copy_arr(double tar[], double sou[], int n);
void copy_ptr(double * tar, double * sou, int n);
void copy_ptrs(double * tar, double * sou, int n);

int main()
{
	int i=0;
	double sou[5]={1.1, 2.2, 3.3, 4.4, 5.5};
	double tar1[5];
	double tar2[5];
	double tar3[5];
	
	copy_arr(tar1, sou, 5);
	copy_ptr(tar2, sou, 5);
	copy_ptrs(tar3, sou, 5); 

	for(i=0;i<5;i++)
		printf("%.1f ",tar1[i]);
	printf("\n");
	
	for(i=0;i<5;i++)
		printf("%.1f ",tar2[i]);
	printf("\n");
	
	for(i=0;i<5;i++)
		printf("%.1f ",tar3[i]);
	printf("\n");	
}

void copy_arr(double tar[], double sou[], int n)
{
	int i;
	for(i=0;i<n;i++)
		tar[i]=sou[i];
}
void copy_ptr(double * tar, double * sou, int n)
{
	int i;
	for(i=0;i<n;i++)
		*(tar+i)=*(sou+i);
}
void copy_ptrs(double * tar, double * sou, int n)
{
	int i=0;
	while(sou+i<sou+n)
	{
		*(tar+i)=*(sou+i);
		i++;
	}
}