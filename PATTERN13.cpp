//SNEHA PORWAL(CSIT-2)
//Program of Pattern
#include <iostream>
using namespace std;
void Pattern(int n)
{
	int i;
	int k=2*i-1;
	for (int i= 1; i <= n; i++) {
			int k=2*i-1;

		for (int j = 1; j <= i; j++) {
			cout<<k+1<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int r;
	cout<<"Enter the number of rows:";
	cin>>r;
	Pattern(r);
}
	
