#include <iostream>
//nhap vao so a xuat ra bang cui truong a
using namespace std;

int main()
{
	int a,tich;
	tich = 0;
	cout<<"NHAP SO"<<endl;
	cin>>a;
	for(int i; i<=10;i++)
	{
	tich =a*i;
	cout<<a<< " x " << i << " = " << tich << endl;
	}
}
