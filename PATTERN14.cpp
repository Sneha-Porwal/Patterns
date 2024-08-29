//SNEHA PORWAL(CSIT-2)
//Program of Pattern
#include <iostream>
using namespace std;
void Pattern(int n)
{
	int i;
	for (int i= 1; i <= n; i++) {
			int k=2*i;

		for (int j = 1; j <= i; j++) {
			cout<<k+2*i<<" ";
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
	
