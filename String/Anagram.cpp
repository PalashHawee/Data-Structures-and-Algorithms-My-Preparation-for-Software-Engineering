//Checkimng if two strings are anagram
#include<stdio.h>

int main()
{
	char A[]="decimal";
	char B[]="medical";
	int i, H[20]={0};
	//for A[]
	for(i=0;A[i]!='\0';i++)
	{
		H[A[i]-97]+=1;
	}
	//for B[]
	for(i=0;B[i]!='\0';i++)
	{
		H[A[i]-97]-=1;
		if(H[A[i]-97]<0)
		{
			printf("Not anagram");
			break;
		}
	}
	if(B[i]=='\0')
		printf("It's anagram'");
}
//Time complexity O(n)
