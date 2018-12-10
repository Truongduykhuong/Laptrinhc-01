//3. S = 1 * ( 1 + 2) * ( 1 + 2 + 3) * ... * ( 1 + 2 + 3 + ... + n)
#include <iostream>

using namespace std;

main()
{
	int n;
	cin>>n;
	int s=1, t=0;
	for(int i=1;i<=n;i++)
	{
		t = t + i;
		s = s * t;
	}
	cout<<s;
}
