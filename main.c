#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int cal(int a, int b, char c)
{
	int r = 0;
	if(c=='+')
	{
		r=a+b;
	}
	else if(c=='-')
	{
		r=a-b;
	}
	else if(c=='*')
	{
		r=a*b;
	}
	else if(c=='/')
	{
		r = a/b;
	}
	return r;
}

int main()
{
	int r = add(3, 4);
	int r2 = cal(4,4,'*');
	printf("%d\n", r);
	printf("%d\n", r2);
	printf("Hello World!\n");
	return 0;
}