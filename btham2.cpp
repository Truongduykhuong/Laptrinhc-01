#include <iostream>
#include<cmath>

using namespace std;

int Sum(int x)
{
	int sum =0;
	for(int i =1;i<=x;i++)
	{
		sum=sum+i;
	}
	return sum;
}
main()
{
	int n;
	cout<<"Nhap So : "<<endl;
	cin>>n;
	int kq = Sum(n);
	cout<<kq;
}
