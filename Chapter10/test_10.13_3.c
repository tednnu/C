#include <stdio.h>

int find_max(int tar[],int len);

int main()
{
	int max,len;
	const int sou[]={6, 5, 24, 6, 55, 2, 3, 0, 95, 25, 1, 17, 1, 45, 63 };
	
	len = sizeof sou / sizeof sou[0];
	max = find_max(sou, len);
	
	printf("%d\n",max);
}

int find_max(int tar[], int len)
{
	int i = 0;
	printf("%d\n",len);
	int max = tar[0];
	for(i=0;i<len;i++)
	{
		if (max<tar[i])
			max = tar[i];
		else
			max = max;
	}
	return max;
}