#include<stdio.h>


int TriAngle(int A)

{
	int Dot=(A*2-1) , Blank , i ;

	
	
	for ( i=A ; i>0 ; i--)
	{
		
		for ( Dot; Dot>0;Dot--)
		{
			printf("*");
		}
		for ( Blank=A ; Blank>0 ; Blank--)
		{
			printf(" ");
		}
	return 0;
	}
}

int main()
{
	int A;
	scanf("%d",&A);
	TriAngle(A);
	return 0;
}

