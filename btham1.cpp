#include <iostream>
#include <cmath>

using namespace std;

int GiaiThua (int x)
{
	int gt =1;
	for(int i=1; i<=x;i++)
	{
		gt=gt*i;
	}
	return gt;
}
main ()
{
	int n;
	cout<<"Nhap So : "<<endl;
	cin>>n;
	int kq = GiaiThua(n);
	cout<<kq;
}
