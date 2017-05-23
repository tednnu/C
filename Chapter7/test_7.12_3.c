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
		if(i>0)
			if(let[i-1]=='e')
				if(let[i]=='i')
					l++;
		i++;
	}
	printf("There are %d 'ei'(s) in total.\n", l);
	return 0;
}
