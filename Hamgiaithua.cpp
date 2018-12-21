#include <iostream>
#include <cmath>

using namespace std;
int Giaithua (int x);
main()
{
	int a;
	cin>>a;
	int kq =Giaithua(a);
	cout<<kq;
}
int Giaithua (int x)
{
	int gt =1;
	for(int i =1 ;i<=x;i++)
	{
	gt = gt*i;
	}
	return gt;
}
