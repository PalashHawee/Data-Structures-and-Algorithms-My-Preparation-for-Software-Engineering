#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	a=20;
	b=10;
	swap(a,b);
	printf("%d %d", a,b);
}
