#include <iostream>
using namespace std;
int main() {
	int n=4;
	int z=n*2-1;
	for (int i=n;i>=1; i--)
	{
		for(int j=n-1;j>=i;j--){
			cout<<" ";
		}
		for(int k=1;k<=z;k++){
			cout<<z;
		}
		z-=2;
		cout<<endl;
	}
} 