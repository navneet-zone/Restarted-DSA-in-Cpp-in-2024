#include <iostream>
using namespace std;
int main() {
	int n=5;
	int px=1;
	int py=n*2-1;
	for (int i=1;i<=n; i++)
	{
		for(int j=1;j<=n*2;j++){
		if(j==px||j==py)
			cout<<"*";
			else
			cout<<" ";
		}
	px++;
	py--;
	cout<<endl;		
	}
}