#include<iostream>
using namespace std;

int findHeight(int n) {
	int start = 1;
	for(int i=0;i<n;i++)
		start = i%2?(start+1) : (start*2);
	return start;
	
}

int main(int argc, char * argv[]) {
	int num;
	cin>>num;
	for(int i = 0; i < num; i++) {
		int nCycles;
		cin>>nCycles;
		cout<<findHeight(nCycles)<<endl;
	}
}