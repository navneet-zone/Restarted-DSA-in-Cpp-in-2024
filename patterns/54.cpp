#include <iostream>
using namespace std;
int main() {
	int n=4;
	int z=1;
	for (int i = 1; i <= n; i++)
	{
		for(int j=n-1;j>=i;j--){
			cout<<" ";
		}
		for(int k = 1; k<=z;k++){
			cout<<"*";
		}
		z+=2;
		cout<<endl;
	}
}