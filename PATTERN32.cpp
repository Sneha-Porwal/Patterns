//SNEHA PORWAL(CSIT-2)
//Program of Pattern
#include <iostream>
using namespace std;
void Pattern(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             cout<<(j*2)<<" ";
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
	
