#include<stdio.h>

int Tri(int A)
{
	int i , H , Blank;

	for (i=1; i<=A; i++)
	{	
	
		if ( i<A)
		{
		for(Blank=i; Blank<A;Blank++)
			
		{
			printf(" ");
		}
		}
		
			for(H=0; H<((i*2)-1); H++)
			{
				printf("*");
			}
		printf("\n");
		
		
	}
	return 0;
}
int main()
{
	int N;
	scanf("%d",&N);
	Tri(N);
	return 0;
}

