#include <iostream>
#include <cmath>

using namespace std;

int SoNT(int x)
{
	if(x%1==0&&x%x==0)
	{
		cout<<"So Nguyen To";
	}
	else
	{
		cout<<"Khong Phai So Nguyen To";
	}
}
main()
{
	int n;
	cout<<"Nhap So :"<<endl;
	cin>>n;
	int kq =SoNT(n);
	cout<<kq;
}
