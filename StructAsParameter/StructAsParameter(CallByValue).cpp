#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;


int area(struct Rectangle r1)
{
	
	return r1.length*r1.breadth;
}
int main()
{
	struct Rectangle r={10,5
	};
	printf("%d",area(r));
}
