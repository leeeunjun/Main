#include<stdio.h>



int main()
{


	int i , a ;
	float f;
	
	printf(" Input : " ) ;
	scanf( " %f",&f);
	
	a= f;
	i= 100*(f-a);
	if (i<0)
	{
		i=-i;
	}
	printf("i=%d\n",i);
	return 0;

}
