#include<stdio.h>
#include<stdlib.h>

int main()
{
	//first method
	int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
	//second method
	int *B[3];
	//3rd method
	int **C;
	int i,j;
	//for 1st method to show all elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d",A[i][j]);
		printf("\n");	
	}
	
	//for second method
	B[0]=(int*)malloc(4*sizeof(int));
	B[1]=(int*)malloc(4*sizeof(int));
	B[2]=(int*)malloc(4*sizeof(int));
	//for second 
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d",B[i][j]);
		printf("\n");	
	}
	
	//for 3rd method
	C=(int**)malloc(3*sizeof(int*));
	C[0]=(int*)malloc(4*sizeof(int));
	C[1]=(int*)malloc(4*sizeof(int));
	C[2]=(int*)malloc(4*sizeof(int));
	//for 3rd
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d",C[i][j]);
		printf("\n");	
	}
	
	
	return 0;
	
}
