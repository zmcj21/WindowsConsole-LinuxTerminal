#include <iostream>
using namespace std;

class Calculator
{
public:
	int a;
	int b;
	char c;
	float r;
	
	Calculator(int a, int b, char c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	~Calculator()
	{
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
			r = (float)a*b;
		}
		else if(c=='/')
		{
			r = (float)a/b;
		}
		cout << r << "\n";
	}
};

int main()
{
	Calculator c(4,5,'/');
	return 0;
}