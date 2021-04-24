#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle *p;
	p=(struct Rectangle*)malloc(sizeof(struct Rectangle));//for creating object in heap section
	p->length=10;
	p->breadth=5;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;
	return 0;
	
}
