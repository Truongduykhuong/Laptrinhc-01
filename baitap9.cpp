//Vi?t chuong trình nh?p vào N r?i tính giai th?a c?a N.
#include <iostream>

using namespace std;

main()
{
	int n;
	int gt =1;
	cout<<"NHAP SO GIAI THUA CAN TINH : ";
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		gt=gt*i;
	}
	cout<<"GIAI THUA BANG"<<gt<<endl;
}
