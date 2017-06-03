#include <stdio.h>
#include <stdlib.h>


int rannn[10]={0,0,0,0,0,0,0,0,0,0};

int main()
{
	int i = 0;
	int *rann = (int *) malloc(50000*sizeof(int));
		
	for(i = 0; i < 50000; i++)
	{
		rann[i] = rand()%10+1;
		printf("%d\n",rann[i]);
		if(rann[i]==1)
			rannn[0]++;
		else if(rann[i]==2)
			rannn[1]++;
		else if(rann[i]==4)
			rannn[3]++;
		else if(rann[i]==7)
			rannn[6]++;
		else if(rann[i]==10)
			rannn[9]++;
		else
			rannn[5]++;
	}
	printf("%d %d %d %d %d %d\n",rannn[0],rannn[1],rannn[3],rannn[6],rannn[9],rannn[5]);
	free(rann);
	
	return 0;
}