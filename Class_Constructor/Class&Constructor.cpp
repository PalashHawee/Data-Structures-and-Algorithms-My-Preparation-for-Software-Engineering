#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;
public:
	Rectangle() //default constructor without params
	{
		length=0;
		breadth=0;
	}
	Rectangle(int l,int b) //constructor with params
	{
		length=l;
		length=b;
	}
	int area() //facilitator
	{
		return length*breadth;
	}
	int perimeter()  //facilitator
	{
		return 2*(length+breadth);
	}
	void setLength(int l) //mutator
	{
		length=l;
		
		
	}
	void setBreadth(int b) //mutator
	{
		breadth=b;
	}
	int getLength() //accessor
	{
		return length;
	}
	int getBreadth() //accessor
	{
		return breadth;
	}
	~Rectangle() //destructor 
	{
		cout<<"Destructor";
	}
	
	
	
};

//main function


int main()
{
	Rectangle r(10,5);
	cout<<"Area "<<r.area()<<endl;
	cout<<"Perimeter "<<r.perimeter()<<endl;
	
	
	return 0;
}
