#include <stdio.h>

int main()
{
	char inp;
	int i=0,l=0;
	char let[40];
	
	printf("Please input something:\n");
	while((inp=getchar())!='#')
	{	
		let[i]=inp;
		printf("%c:%d ", let[i], let[i]);
		if((i+1)%8==0)
			printf("\n");
		i++;
	}
	
	return 0;
}
