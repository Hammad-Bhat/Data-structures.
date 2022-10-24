#include<iostream>
using namespace std;

int main()
{
	char str[100];
	int i;
	puts(str);
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>= 'a'&& str[i]<='z')
		{
			str[i]= str[i]-32;
		}
	}
	cout<<str[i]<<endl;
}
