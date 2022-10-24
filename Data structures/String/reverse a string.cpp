#include<stdio.h>

int main()
{
	char str[1000];
	gets(str);
	int i=0;
	while(str[i]!='\0')
	i++;
	printf("lent of string str is %d \n",i);
	int strstart = 0, strend =--i;
	while(strstart <= strend)
	{
		char temp = str[strstart];
		str[strstart] = str[strend];
		str[strend]=temp;
		
		strstart++;
		strend--;
	}
	puts(str);
}
