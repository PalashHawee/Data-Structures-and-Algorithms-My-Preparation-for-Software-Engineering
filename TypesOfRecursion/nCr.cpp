#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	return fact(n-1)*n;
		
}
int nCr(int n,int r)
{
	int den,num;
	num=fact(n);
	den=fact(r)*fact(n-r);
	return num/den;
}
//using recursion Pascal's triangle method
int NCR(int n,int r)
{
	if(r==0||n==r)
		return 1;
	else
		return NCR(n-1,r-1)+NCR(n-1,r);	
}
int main()
{
	printf("%d\n",NCR(5,1));
	return 0;
}
