#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[5]={2,4,6,8,10};
	int *p;
	int i;
	p=(int *)malloc(5*sizeof(int)); //for accessing heap in c lang
	for(i=0;i<5;i++)
		printf("%d\n", A[i]);
	printf("\n");
	p[0]=1;
	p[1]=2;
	p[2]=3;
	p[3]=4;
	p[4]=5;
	for(i=0;i<5;i++)
		printf("%d\n",p[i]);
	return 0;	
			
	
}
