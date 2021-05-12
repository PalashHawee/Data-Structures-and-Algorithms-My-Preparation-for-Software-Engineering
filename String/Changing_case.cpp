//Changing case of a string 
#include<stdio.h>

int main()
{
	char A[]="PALASH";
	int i;
	for(i=0;A[i]!='\0';i++)
	{
		A[i]=A[i]+32; //Ascii code diff between Upper & Lower is 32 =(97-65)
	}
	printf("%s",A);
	return 0;
}
