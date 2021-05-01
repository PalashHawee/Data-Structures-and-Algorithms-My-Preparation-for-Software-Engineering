#include<stdio.h>
int main()
{
	int A[]={2,4,6,8,10};
	int i;
	for(i=0;i<5;i++)
		printf("%u\n", &A[i]); //for printing all addresses of elements
	return 0;	
}
