#include <iostream>
using namespace std;
int main() {
	int n=3;
	for (int i=n;i>=-n; i--)
	{
		for(int j=1;j<=abs(i);j++){
			cout<<" ";
		}
	for(int k=n;k>=abs(i);k--)
	{
		cout<<k;
	}
	cout<<endl;		
	}
}