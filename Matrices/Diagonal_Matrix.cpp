//Diagonal Matrix
#include<stdio.h>

struct Matrix
{
	int A[10];
	int n;
};
//setting the matrix
void Set(struct Matrix *m, int i, int j, int x)
{
	if(i==j)
		m->A[i-1]=x;
}
//retrieving the elems in a specific position
int Get(struct Matrix m, int i, int j)
{
	if(i==j)
		return m.A[i-1];
	else
		return 0;	
}
//displaying
void Display(struct Matrix m)
{
	int i,j;
	for(i=0;i<m.n;i++)
	{
		for(j=0;j<m.n;j++)
		{
			if(i==j)
				printf("%d ", m.A[i]);
			else
				printf("0 ");	
		}
		printf("\n");
	}
}
int main()
{
	struct Matrix m;
	m.n=4;  //4*4 matrix
	Set(&m,1,1,5);
	Set(&m,2,2,8);
	Set(&m,3,3,10);
	Set(&m,4,4,20);
	Display(m);
	printf("%d \n", Get(m,2,2));
	return 0;
}
