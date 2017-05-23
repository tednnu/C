#include <stdio.h>
#include <ctype.h>

int main()
{
	int i=0;
	int ch=0;
	int ci=0;
	int cj=0;
	int ck[40];
	
	while((ch=getchar())!=EOF)
	{
		if(ch=='\n')
			break;
		else if(ch!=' ')
			ci++;	
		else
		{
			ck[cj]=ci;
			cj++;
			ci=0;
		}
	}
	for(i=0;i<cj+1;i++)
		printf("There are %d letters.\n",ck[i]);
	
	return 0;
}
