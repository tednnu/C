#include <stdio.h>

int main()
{
	int num[8];
	int i;
	num[0]=2;
	
    for(i=1;i<8;i++)
		num[i]=num[i-1]*2;
	i=0;
	do
	{
		printf("%d ",num[i]);
		i++;
	}while(i<8);
	
	return 0;
}
