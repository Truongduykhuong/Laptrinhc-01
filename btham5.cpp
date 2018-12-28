#include <iostream>
#include <cmath>

using namespace std;

int TimSoLon(int x,int y)
{
	if(x>y)
	{
		cout<<"a Lon hon";
	}
	else if (x ==y)
	{
		cout<<"a bang b";
	}
	else
	{
		cout<<"b lon hon";
	}
}
main()
{
	int a,b;
	cout<<"Nhap A, B:"<<endl;
	cin>>a>>b;
	int kq = TimSoLon(a,b);
	cout<<kq;
}
