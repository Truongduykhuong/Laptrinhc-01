//Vi?t chuong tr�nh t�nh t?ng b?c 3 c?a N s? nguy�n d?u ti�n.
#include <iostream>

using namespace std;

main()
{
	int n;
	int a=0 , b = 0;
	cout<<"NHAP SO N :";
	cin>>n;
	for(int i; i<=n;i++)
	{
	a=i*i*i;
	b=b+a;	
	}
	cout<<b;
}
