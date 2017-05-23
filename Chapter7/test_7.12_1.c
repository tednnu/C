#include <stdio.h>

int main()
{
	char inp;
	int spa=0,ent=0,oth=0;
	
	printf("Please input something:\n");
	while((inp=getchar())!='#')
	{	
		if(inp==' ')
			spa++;
		else if(inp=='\n')
			ent++;
		else
			oth++;
	}
	printf("There are %d spaces, %d enters and %d others.\n", spa, ent, oth);
	return 0;
}
