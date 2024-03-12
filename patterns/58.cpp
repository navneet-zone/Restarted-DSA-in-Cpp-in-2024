#include <iostream>
using namespace std;
int main() {
	int n=3;
	int i;
	int j;
	for (int i=1;i>=-3; i--)
	{
		for(int j=1;j<n*2;j++){
		if(j>=px && j<=py)
			cout<<"*";
		else
			cout<<" ";
		}
		px--;
		py++;
		cout<<endl;
	}
} 