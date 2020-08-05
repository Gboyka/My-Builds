#include<iostream>
#include<string.h>
using namespace std;


void stack()
{
	int i=0;
	if(i<=0)
	{
	i--;	
	stack();
}
}


void stack_overflow(const char *x)
{
   char y[1];
    strcpy(y, x);
}
int main()
{
	
stack();	
char hello[100];
for(int i=0;i<100;i++)
{
	hello[i]=i;
}


stack_overflow(hello);


cout<<"Hello\n";



	return 0;
	
}
