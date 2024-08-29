//SNEHA PORWAL(CSIT-2)
//Program of Pattern
#include <iostream>
using namespace std;
void Pattern(int n)
{
	int i,j;
	for(i=n;i>=1;i--)
     {
         for(j=1;j<=n-i;j++)
         {
             cout<<((char)(i+64));
             cout<<" ";
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
	
