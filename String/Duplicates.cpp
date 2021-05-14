//finding duplicates using hashtable
#include<stdio.h>
int main()
{
	char A[]="finding"; //lowercase
	int H[26], i; // 26 letters in alphabet
	for(i=0;A[i]!='\0';i++)
	{
		H[A[i]-97]+=1; //storing in hashtable and subtracting form 97 asci code
	}
	for(i=0;i<26;i++) //looping through hashtable to find duplicates
	{
		if(H[i]>1)
		{
			printf("%c",i+97); //adding with the actual value for finding duplicate letter
			printf("%d",H[i]); //no of times it appearing
		}
	}
}
//Time complexity is O(n+n) for original array n and for hastable also n time linear so O(n)
