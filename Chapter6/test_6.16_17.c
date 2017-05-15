#include <stdio.h>

int main()
{
	int m=100;
	int i;
	for(i=1;i<30;i++)
	{
		m = m*1.08;
		if (m>10)
			m = m-10;
		else
			break;
	}
	printf("%d years.\n",i);
	
	return 0;
}
