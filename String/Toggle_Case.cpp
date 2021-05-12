//Changing case of a string 
//toggle case
#include<stdio.h>

int main()
{
	char A[]="PaLaSh";
	int i;
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]>=65 && A[i]<=90)
			A[i]+=32;
		else if(A[i]>='a' && A[i]<=122) //'a'=97 in ascii
			A[i]-=32;	
	}
	printf("%s",A);
	return 0;
}
