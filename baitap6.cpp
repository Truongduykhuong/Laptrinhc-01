//Vi?t chuong trình nh?p vào m?t s? nguyên r?i in ra t?t c? các u?c s? c?a s? dó.
#include <iostream>

using namespace std;

main()
{
	int n;
	cout<<"Nhap N : ";
	cin>>n;
	for(int i;i<n/2;i++)
	{
		n%i==0;
		cout<<i<<endl;
	}
	
}
