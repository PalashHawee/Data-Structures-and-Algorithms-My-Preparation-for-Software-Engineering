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
int main()
{
	struct Array arr={{2,3,4,5,6},20,5};
	//Reverse(&arr);
	Reverse2(&arr);
	display(arr);
	return 0;
}
