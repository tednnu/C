#include <stdio.h>

int main()
{
	int m=5;
	int i;
	for(i=1;i<50;i++)
	{
		m = m-i;
		m = m*2;
		printf("Week %d %d friends left.\n",i,m);
		if (m<=150)
			continue;
		else
			break;
	}
	printf("%d weeks.\n",i);
	
	return 0;
}
