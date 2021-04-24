#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

void changelength(struct Rectangle *p,int l)
{
	p->length=l;
}
int main()
{
	struct Rectangle r={10,5
	};
	changelength(&r,20);
}
