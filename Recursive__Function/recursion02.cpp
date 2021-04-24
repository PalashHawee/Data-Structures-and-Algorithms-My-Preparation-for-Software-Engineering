//first call the function and then print type
#include<iostream>
#include<stdio.h>
using namespace std;

void fun2(int n)
{
	if (n>0)
	{
		fun2(n-1);
		printf("%d",n);
	}
}
int main()
{
	int x=3;
	fun2(x);
}
