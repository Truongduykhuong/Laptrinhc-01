#include <iostream>
#include <conio.h>
#include <math.h>
//tim so nguyen to 
using namespace std;

int main()
{
	int a;
	cout<<"NHAP A : "<<endl;
	cin>>a;
	cout<<"SO NGUYEN TO LA "<<endl;
	for(int i=2;i<a;i++)
	{
		bool prime = true;
		for(int j=2;j*j<=i;j++)
		{
			
			if(i%j==0)
			{
			prime = false;
			break;
			}
		}
			{
			if(prime) cout<<i<<endl;
			}
		}
	}

