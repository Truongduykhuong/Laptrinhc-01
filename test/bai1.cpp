#include <iostream>
//nhap 1 so a tinh tong tu a den n
using namespace std;

main()
{
	int a;
	int giaithua;
	cout<<"NHAP A : "<<endl;
	cin>>a;
	for(int i=1; i<=a ; i++)
	{
	giaithua = giaithua+i;	
	} 
	cout<<"TONG = "<<giaithua;
}
