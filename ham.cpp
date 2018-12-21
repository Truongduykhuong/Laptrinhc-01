#include <iostream>
#include <cmath>
using namespace std;

int TinhTong(int a, int b);
int TinhHieu(int a, int b);
int TinhTich(int a, int b);
int TinhThuong(int a,int b);
main()
{
	int x , y;
	cin>>x>>y;
	int kq = TinhTong(x,y);
	cout<< kq<<endl;
	int kq_hieu =TinhHieu(x,y);
	cout<<kq_hieu<<endl;
	int kq_tich =TinhTich(x,y);
	cout<<kq_tich<<endl;
	int kq_thuong = TinhThuong(x,y);
	cout<<kq_thuong<<endl;
	
}
int TinhTong(int a, int b)
{
	return a + b;
}
int TinhHieu(int a, int b)
{
	return a-b;
}
int TinhTich(int a, int b)
{
	return a*b;
}
int TinhThuong(int a, int b)
{
	return a/b;
}
