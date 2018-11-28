#include <iostream>
//nhap mot so nguyen a tinh tong cac so le tu 1 den a
using namespace std;

main()
{
	int a;
	int n;
	cout<<"NHAP A : "<<endl;
	cin>>a;
	for(int i=1;i<=a;i=i+2)
	{
		n = n + i;
	}
	cout<<"TONG = "<<n;
}
