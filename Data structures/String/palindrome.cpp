#include<stdio.h>

int main()
{
	char str[100];
	gets(str);
	
	int i=0;
	while(str[i]!='\0')
	{
	  i++;
	}
	
	int strindex=0,endindex=--i,palindrome=1;
	while(strindex<=endindex)
	{
		if(str[strindex]!=str[endindex])
		{
			palindrome=0;
			break;
		}
		
		strindex++;
		endindex--;
	}
	palindrome ? printf(" is palindrome"):printf(" not palindrome ");
	return 0;
}

