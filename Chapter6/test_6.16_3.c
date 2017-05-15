#include <stdio.h>

int main()
{
	int i,j,k;
	
	for (i=0;i<6;i++)
	{
		k = ((1+i)*i)/2;
		for (j=-1;j<i;j++)
			printf("%c",'A'+k+j+1);
		printf("\n"); 
	}
	
	return 0;
}
