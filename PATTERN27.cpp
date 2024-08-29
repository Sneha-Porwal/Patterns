//SNEHA PORWAL(CSIT-2)
//PROGRAM PATTERN.
#include<iostream>
using namespace std;
void Pattern(int n)
{
	for(int i=n;i>=1;i--)
	{
		for(int k=1;k<=n-i;k++) cout<<"  ";
		for(int j=1;j<=(2*i-1);j++)
		{
			cout<<char(2*i-1+96)<<" ";
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
