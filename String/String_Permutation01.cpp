//Finding permutation of a given string
//Method 01
#include<stdio.h>

void perm(char s[], int k)
{
	static int A[10]={0};
	static char res[10];
	int i;
	if(s[k]=='\0')
	{
		res[k]='\0';
		printf("%s",res);
	}
	else
	{
		for(i=0;A[i]!='\0';i++)
		{
			if(A[i]==0)
			{
				res[k]=s[i]; //copying from s[i]
				A[i]=1; //marking as 1
				perm(s,k+1);
				A[i]=0; //marking as 0 agian while backtracking
			}
		}
	}
}
int main()
{
	char s[]="ABC";
	char res;
	perm(s,0);
	
}
