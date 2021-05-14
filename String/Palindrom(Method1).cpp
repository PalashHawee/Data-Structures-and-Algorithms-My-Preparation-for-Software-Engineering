//checking if a given string is palindrome
#include<stdio.h>
//method 1 using extra array
int main()
{
	char A[]="Madam";
	char B[6];
	int i,j;
	//traversing A[i]
	for(i=0;A[i]!='\0';i++)
	{
		
	}
	i=i-1; //for backword traversing
	for(j=0;i>0;i--,j++)
	{
		B[j]=A[i]; //storing in B[]
		
	}
	B[j]='\0'; //making sure new array B is string
	//comparing
	for(i=0,j=0;A[i]!=0&&B[j]!=0;i++,j++)
	{
	
		
			if(A[i]!=B[j])
			{
				break;
			}	
		
			else
			{
				printf(" The string is palindrome");
			}
	}
	printf(" The string is palindrome %s",B);
}
