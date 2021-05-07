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
//reversing array using auxilliary method
void Reverse(struct Array *arr)
{
	int *B;
	int i,j;
	B=(int*)malloc(arr->length*sizeof(int));
	for(i=arr->length-1,j=0;i>=0;i--,j++)
		B[j]=arr->A[i];
	for(i=0;i<arr->length;i++)
		arr->A[i]=B[i];	
}//reversing array using swapping method
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void Reverse2(struct Array *arr)
{
	int i,j;
	int temp;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);	
	}	
}
//inserting elements in a sorted array
void InsertSort(struct Array *arr,int x)
{
	int i=arr->length-1;
	if(arr->length==arr->size) //checking if there's free space in array
		return;
	while(i>=0 && arr->A[i]>x)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}	
	arr->A[i+1]=x;
	arr->length++;
}
//checking is an array is sorted
int IsSorted(struct Array arr)
{
	int i;
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]>arr.A[i+1])
			return 0;
	}
	return 1;
}
//rearranging -ve and +ve numbers
void Rearrange(struct Array *arr)
{
	int i,j;
	i=0;
	j=arr->length-1;
	while(i<j)
	{
		while(arr->A[i]<0) i++;
		while(arr->A[j]>=0) j--;
		if(i<j) swap(&arr->A[i],&arr->A[j]);
	
			
		
	}
}
int main()
{
	struct Array arr={{2,-3,4,5,-6,10},20,5};
	//Reverse(&arr);
	//Reverse2(&arr);
	//InsertSort(&arr,20);
	//printf("%d\n",IsSorted(arr));
	Rearrange(&arr);
	display(arr);
	return 0;
}
