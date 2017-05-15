#include <stdio.h>

int main()
{
	float i,n,s;
	
	n = 1;
	while(n>0)
	{
		printf("Please input an integer:\n");
		scanf("%f",&n);
		s = 0;
		if (n>0)
		{	
			for(i=0;i<n;i++)
				s = s + 1/(i+1);
			printf("%f\n",s);
		}
		else
			continue;
	}
	printf("ERROR!\n");
	
	return 0;
}
