// C Program to print the Floyd's Triangle of Alphabets
#include <iostream>
using namespace std;
void Pattern(int r )
{
	int n = 65;

	// outer loop to print all rows
	for (int i = 0; i < n; i++) {

		for (int j = 0; j <= i; j++) {
			  char ch = char(n);
 
              cout << ch << " ";
        }
        n= n+ 1;
        cout << endl;
	}
}
int main()
{
	int r;
	cout<<"Enter the number of rows:";
	cin>>r;
	Pattern(r);
}
	
