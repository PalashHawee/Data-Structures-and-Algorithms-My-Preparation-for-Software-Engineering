//Chceking palindrome using swapping method
#include<stdio.h>

int main()
{
	char A[]="madam";
	int i,j;
	int t;
	for(j=0;A[j]!='\0';j++) // for traversing first till the end
	{
		
	}
	j=j-1; //making backword
	for(i=0;i<j;i++,j--)
	{
		t=A[i];
		A[i]=A[j];
		A[j]=t;
	}
	printf("The string is palindrome %s",A);
}
