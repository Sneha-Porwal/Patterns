//SNEHA PORWAL(CSIT-2)
//PROGRAM PATTERN.
#include<iostream>
using namespace std;
void Pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n-i;k++) cout<<"  ";
		for(int j=1;j<=(i);j++)
		{
			cout<<char(i+96)<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int r;
	cout<<"Enter the number of rows:";
	cin>>r;
	Pattern(r);
}


