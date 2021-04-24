#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

void fun(struct test t1)
{
	t1.A[0]=25;
	t1.A[2]=31;
}
int main()
{
	struct test t={{2,4,6,8,10},5};
	fun(t);
	
}

