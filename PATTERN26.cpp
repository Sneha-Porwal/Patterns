//SNEHA PORWAL(CSIT-2)
//Program of Pattern
#include <iostream>
using namespace std;
void Pattern(int n)
{
	int i,j;
	for(i=n;i>=1;i--)
     {
         for(j=n;j>=i;j--)
         {
         	for(int k=1;k<=n;k++)
         	cout<<" ";
            cout<<((char)(i+96));
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
	
