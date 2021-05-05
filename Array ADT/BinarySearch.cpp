#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;
};
void display(struct Array arr)
{
	int i;
	printf("\nElements are: \n");
	for(i=0;i<arr.length;i++)
		printf("%d\n",arr.A[i]);
}
//for appending(adding) elements at the last index
void Append(struct Array *arr,int x)
{
	if(arr->length<arr->size)
		arr->A[arr->length++]=x;
}
//for inserting element at a given index
void Insert(struct Array *arr,int index, int x)
{
	int i;
	if(index>=0 && index<=arr->length)
	{
		for(i=arr->length;i>index;i--)
			arr->A[i]=arr->A[i-1];
		arr->A[index]=x;
		arr->length++;	
	}
}
//for deleting element at a given index
int Delete(struct Array *arr, int index)
{
	int x=0;
	int i;
	if(index>=0 && index<arr->length)
	{
		x=arr->A[index];
		for(i=index;i<arr->length-1;i++)
			arr->A[i]=arr->A[i+1];
		arr->length--;
		return x;	
	}
	return 0;
}
//swapping for Linear Transposition technique
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
//linear search Move to head method
int LinearSearch(struct Array *arr,int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i],&arr->A[0]);
			return i;
		}
			
	}
	return -1;
}
//Iterative Binary Search
int BinarySearch(struct Array arr,int key)
{
	int l,h,mid;
	l=0;
	h=arr.length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.A[mid])
			return mid;
		else if(key<mid)
			h=mid-1;
		else
			l=mid+1;		
	}
	return -1;
}
//Binary Search using recursion
int RBinSearch(int a[],int l, int h, int key)
{
	int mid;
	if(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
			return RBinSearch(a,l,mid-1,key);
		else
			return RBinSearch(a,mid+1,h,key);		
	}
	return -1;
}

int main()
{
	struct Array arr={{2,3,4,5,6},20,5};
	//Append(&arr,10);
	//Insert(&arr,1,10);
	//printf("%d\n", Delete(&arr,0));
	//printf("%d\n",LinearSearch(&arr,6));
	//printf("%d\n",BinarySearch(arr,5));
	printf("%d\n",RBinSearch(arr.A,0,arr.length,5));
	display(arr);
	return 0;
}
