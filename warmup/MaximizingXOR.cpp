#include<iostream>
using namespace std;

int maxXor(int l, int r) {
	int max = 0;
	for(int i = l; i <= r; i++)
		for(int j = i; j <= r; j++)			
			max = (i^j) > max ? (i^j) : max;
	return max;
}

int main(int argc, char * argv[]) {
	int l, r;
	cin>>l;
	cin>>r;
	cout<<maxXor(l,r);
}