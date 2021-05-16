//Permutation of String using swapping method pseudo code
#include<stdio.h>
void perm(char s[],int l, int h)
{
	int i;
	if(l==h)
	{
		printf("%s",s);
	}
	else
	{
		for(i=l; l<=h; i++)
		{
			swap(s[l],s[i]);
			perm(s,l+1,h);
			swap(s[l],s[i]);
		}
	}
}
