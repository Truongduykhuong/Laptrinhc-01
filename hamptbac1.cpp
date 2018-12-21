#include <iostream>
#include <cmath>

using namespace std;
int Giaipt(int x,int y );
main()
{
	int a, b;
	cin>>a>>b;
	int c = Giaipt(a,b);
	cout<<c;
	
	
}
int Giaipt(int x,int y )
{
	if(x!=0){
		return -y/x;
	}
	else
	{
		cout<<"Khong phai pt bac 1";
	}
}
