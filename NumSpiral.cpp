#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long r,c;
	long long arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>r>>c;
		long long m=max(r,c);
		arr[i]=m*m-m+1+(r-c)*(long long)pow(-1,m);
	}
	for(int i=0; i<n; i++)
	cout<<arr[i]<<endl;
}
