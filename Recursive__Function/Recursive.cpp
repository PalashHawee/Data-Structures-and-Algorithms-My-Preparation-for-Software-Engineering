#include<stdio.h>
#include<stdlib.h>

int fun(int n)
{

	if (n>0)
	{
		
		return fun(n-1)+n;
	}
	return 0;
}
int main()
{
	int r;
	r=fun(5);
	printf("%d\n", r);
}
