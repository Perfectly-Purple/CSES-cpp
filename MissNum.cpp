#include<iostream>
using namespace std;
int main()
{	
	long long num, sum=0, n;
	cin>>num;
	long long arr[num-1];
	for(int i=0; i<num-1; i++)
	{cin>>n;
	sum+=n;}
	long long fin=(num*(num+1))/2-sum;
	cout<<fin;
}
