#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};
struct Rectangle *fun()
{
	struct rectangle *p;
	p=new Rectangle; //works as malloc in c++
	p->length=15;
	p->breadth=10;
	return p;
}
int main()
{
	struct Rectangle *ptr=fun()
	cout<<"Length"<<p->length<<endl<<"Breadth"<<p->breadth<<endl;
	return 0;
}
