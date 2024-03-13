#include <iostream>
using namespace std;
int main() {
	int i,k,j;
	int p=1;
	int n=3;
	for (i=n;i>=-n; i--)
	{
		for(j=1;j<=abs(i);j++){
			cout<<" ";
		}
	for(int k=n;k>=abs(i);k--)
	{
		cout<<"* ";
	}
	cout<<endl;		
	}
}