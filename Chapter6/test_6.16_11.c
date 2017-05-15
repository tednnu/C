#include <stdio.h>

int main()
{
	int num[8];
	int i;
	
	for(i=0;i<8;i++)
	{
		printf("Please input an integer:\n");
		scanf("%d",&num[i]);
	}
	for(i=7;i>=0;i--)
		printf("%d ",num[i]);
	printf("\n");
	
	return 0;
}
