#include<iostream>
#include<stdio.h>
using namespace std;

template<class T> //generic data type T
class Arithametic
{
private:	
	T a;
	T b;
public:
	Arithametic(T a,T b); //constructor with params
	T add();
	T sub();
	
}; //ends of class

template<class T>
Arithametic<T>::Arithametic(T a,T b)
{
	this->a=a; //by 'this->' indicating current object
	this->b=b;
	
	
}
template<class T>
T Arithametic<T>::add()
{
	T c;
	c=a+b;
	return c;
}
template<class T>

T Arithametic<T>::sub()
{
	T c;
	c=a-b;
	return c;
}

//main function

int main()
{
	Arithametic<int> ar(10,5); //creating object with type int
	cout<<ar.add()<<endl;
	Arithametic<float> ar1(4.5,2.5); //creating object with type float
	cout<<ar1.sub()<<endl;
}



