#include <iostream>
using namespace std;
int main() {
	int n=5;
	for (int i = 65; i <= 69; i++)
	{
		for (int j = n-1; j >= i-64; j--)
		{
			cout<<" ";
		
	}
	for ( int k = 65; k <= i; k++)
	{
		cout<<(char)i<<" ";
	}
	
	cout<<endl;
}
	return 0;
}