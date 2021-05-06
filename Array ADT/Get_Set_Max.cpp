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
//Get method
int Get(struct Array arr,int index) //call by values
{
	if(index>=0 && index<arr.length)
		return arr.A[index];
	return -1;	
}
//set method
void Set(struct Array *arr,int index,int x) //call by address for modifying elements
{
	if(index>=0 && index<arr->length)
		arr->A[index]=x;

}
//max method
int Max(struct Array arr)
{
	int max=arr.A[0];
	int i;
	for(i=1;i<arr.length;i++)
	{
			if(arr.A[i]>max)
				max=arr.A[i];
	}
	return max;	   // O(N)
}
//Min method
int Min(struct Array arr)
{
	int min=arr.A[0];
	int i;
	for(i=1;i<arr.length;i++)
	{
			if(arr.A[i]<min)
				min=arr.A[i];
	}
	return min;	// O(N)
}
//finding sum function
int Sum(struct Array arr)
{
	int i;
	int total=0;
	for(i=0;i<arr.length;i++)
		{
			total+=arr.A[i];
		}
	return total;	// O(N)
}
//finding average function
float Avg(struct Array arr)
{
	return (float)Sum(arr)/arr.length;
}
int main()
{
	struct Array arr={{2,3,4,5,6},20,5};
	//printf("%d\n",Get(arr,2));
	//Set(&arr,0,45);
	//printf("%d\n",Max(arr));
	//printf("%d\n",Min(arr));
	//printf("%d\n",Sum(arr));
	printf("%f\n",Avg(arr));
	display(arr);
	return 0;
}
