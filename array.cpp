#include <iostream>

using namespace std;

int main()
{
	int arr[10];
	cout<<"Nhap gia tri cua mang :"<<endl;
	for(int i = 0; i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Xuat ra phan tu cua mang :"<<endl;
	for(int i =0; i<10; i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"Dao nguoc mang : "<<endl;
	for(int i=9; i>=0;i--)
	{
		cout<<arr[i]<<endl;
	}
	int sum = 0;
	cout<<"Tong mang : "<<endl;
	for(int i= 0 ; i<10 ;i++)
	{
		sum =sum+arr[i];
	}
	cout<<sum<<endl;
	cout<<"Cac phan tu so chan cua mang la : "<<endl;
	int tongchan =0;
	int maxchan = arr[0];
	int minchan =arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<endl;
			tongchan=tongchan +arr[i];
			if(arr[i]>maxchan)
	{
	maxchan = arr[i];	
	}	
	if(arr[i]<minchan)
	{
		minchan=arr[i];
	}
	}	
	}
	cout<<"MIN CHAN :"<<minchan<<endl;
	cout<<"MAX CHAN : "<<maxchan<<endl;
	cout<<"TONG CHAN : "<<tongchan<<endl;
	cout<<"Cac phan tu so le : "<<endl;
	int tongle = 0;
	int maxle = arr[0];
	int minle =arr[0];
	for(int i= 0; i<10 ;i++)
	{
	if(arr[i]%2!=0)
	{
	cout<<arr[i]<<endl;
	tongle=tongle+arr[i];
	if(arr[i]>maxle)
	{
	maxle = arr[i];	
	}	
	if(arr[i]<minle)
	{
		minle=arr[i];
	}
	}	
	}
	cout<<"MIN LE :"<<minle<<endl;
	cout<<"MAX LE :"<<maxle<<endl;
	cout<<"TONG LE :"<<tongle<<endl;
	int max =arr[0];
	
	for(int i=0;i<10;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"SO LON NHAT : "<<max<<endl;
	int min =arr[0];
	for(int i =0;i<10;i++)
	{
		if(arr[i]<min)
		{
		min=arr[i];	
		}
	}
	cout<<"SO BE : "<<min<<endl;
}
