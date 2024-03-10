#include <iostream>
using namespace std;
int main() {
	int n=5;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			if (i==j||i+j==6)
				cout<<"*";
			else
			cout<<"o";
		}
	cout<<endl;
}
	return 0;
}