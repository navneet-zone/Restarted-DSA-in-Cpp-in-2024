#include <iostream>
using namespace std;
int main() {
	int n=5;
	for (int i = 5; i >= 1; i--)
	{
		for (int j = n-1; j >= i; j--)
		{
			cout<<" ";
		
	}
	for ( int k = 1; k <= i; k++)
	{
		cout<<i;
	}
	
	cout<<endl;
}
	return 0;
}