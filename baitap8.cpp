//Vi?t chuong trình nh?p vào N s? nguyên, tìm s? l?n nh?t, s? nh? nh?t.
#include <iostream>

using namespace std;

main()
{
	int n, a[100];
	int max,min;
	cout<<"NHAP PHAN TU CUA N : ";
	cin>>n;
	for(int i=0; i<=n;i++)
	{
		cout<<"a"<<i;
		cin>>a[i];
	}
	min=max=a[0];
	for(int i; i<=n;i++)
	{
		if(max < a[i])
		{
		max = a[i];
		}
		if(min > a[i])
		{
		min = a[i];
		}
	}
	cout<<"SO LON NHAT : "<<max<<endl;
	cout<<"SO NHO NHAT : "<<min;
}
