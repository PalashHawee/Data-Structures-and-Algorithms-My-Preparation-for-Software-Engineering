//Sum of first N natural number using recursion
#include<stdio.h>
//using recursion first
int sum(int n)
{
	if(n==0)
		return 0;
	return sum(n-1)+n;			
}
//using iteration
int Isum(int n)
{
	int s=0;
	int i;
	for(i=1;i<=n;i++)
		s=s+i;
	return s;	
}
int main()
{
	int r;
	r=Isum(5);
	printf("%d\n",r);
	return 0;
}
