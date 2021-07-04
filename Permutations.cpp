#include<iostream>
using namespace std;
int main(){
	int n, ind=0;
	cin>>n;
	if(n==2 || n==3)
	cout<<"NO SOLUTION";
	else{
	long arr[n];
	for(int i=2; i<=n; i+=2)
	{
		arr[ind]=i;
		ind++;
	}
	for(int i=1; i<=n; i+=2)
	{
		arr[ind]=i;
		ind++;
	}
	for(int i=0; i<n; i++)
	cout<<arr[i]<<" ";
	return 0;
	}
}
