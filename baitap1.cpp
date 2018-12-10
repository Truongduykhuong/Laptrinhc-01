//1. S = 1 + ( 1 + 2) + ( 1 + 2 + 3) + ... + ( 1 + 2 + 3 + ... + n)
//2. S = 1 + ( 1 * 2) + ( 1 * 2 * 3) + ... + ( 1 * 2 * 3 * ... * n)
//3. S = 1 * ( 1 + 2) * ( 1 + 2 + 3) * ... * ( 1 + 2 + 3 + ... + n)
//4. BTNC: Ve 1 cai tam giac hinh sao voi chieu dai nhap tu ban phim:
#include <iostream>

using namespace std;

main()
{
	
	int n;
	cin>>n;
	int s = 0, t = 0;
	for(int i = 1; i <= n; i++)
	{
		t = t + i;
		s = s + t;
	}
	cout<<s;
	}
