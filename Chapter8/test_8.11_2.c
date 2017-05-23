#include <stdio.h>

int main()
{
	int ch,ci=0;
	
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
		if(ch!='\n')
			printf(":%d ",ch);	
		if(ch!='\n')
			ci++; 
		if(ci%10==0)
			printf("\n");
	}
	
	return 0;
}
