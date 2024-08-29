//SNEHA PORWAL(CSIT-2)
//Program of Pattern
#include <iostream>
using namespace std;
void Pattern(int n)
{
	int k=1;
	for (int i = 1; i <=n; i++) {

		for (int j = 1; j <=2*i; j++) {
			cout<<k<<" ";
			k++;
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
	
