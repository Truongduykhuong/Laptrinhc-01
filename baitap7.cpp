// Vi?t chuong tr�nh t�nh t?ng b�nh phuong c�c s? l? t? 1 d?n N.
#include <iostream>

using namespace std;

main()
{
	int n;
	int a=0,b=0;
	cout<<"NHAP N :";
	cin>>n;
	for(int i;i<=n;i++)
	{
		i%2!=0;
		a =i*i;
		b=b+a;
	}
	cout<<b;
}
