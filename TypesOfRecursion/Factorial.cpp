//finding factorial of a given integer number

#include<stdio.h>

//using recursion first
int fact(int n)
{
	if(n==0)
		return 1;
	return fact(n-1)*n;	
}
//using iteration
int Ifact(int n)
{
	int fact=1;
	int i;
	
	for(i=1;i<=n;i++)
		fact=fact*i;
	return fact;	
	
}

int main()
{
	int r;
	r=Ifact(4);
	printf("%d\n", r);
	return 0;
}
