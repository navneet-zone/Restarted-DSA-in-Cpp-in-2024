#include <iostream>
using namespace std;
int main() {
	int n=3;
	for (int i=n;i>=-n; i--)
	{
		for(int j=n;j>=abs(i);j--){
			cout<<j;
		}
		cout<<endl;
		}
		
}