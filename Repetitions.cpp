#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char c=s.at(0);
	int count=0, max=0;
	for(int i=0; i<s.size(); i++)
	{
		if(s.at(i)==c)
		count++;
		else
		{
			if (count>max)
			max=count;
			count=1;
			c=s.at(i);
		}
	}
	if(count>max)
	max=count;
	cout<<max;
}
