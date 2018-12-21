#include <iostream>
#include <cmath>

using namespace std;

int tinh(int a, int b, char c);
main()
{
	int x , y;
	char z;
	cin>>x>>y>>z;
	int kq = tinh(x,y,z);
	cout<<kq;
}
int tinh(int a, int b, char c)
{
	switch(c)
	{
		case'+':
		return a + b;
		break;
		case'-':
		return a - b;
		break;
		case'*':
		return a * b;
		break;
		case'/':
		return a / b;
		break;
	}
}
