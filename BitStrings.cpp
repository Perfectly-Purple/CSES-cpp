#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long m=1;
	for(int i=1; i<=n; i++)
	{
		m*=2;
		m%=1000000007;
	}
	cout<<m;
}
