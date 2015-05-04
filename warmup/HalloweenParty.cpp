#include<iostream>
#include<vector>
using namespace std;

long long maxPieces(int ncuts) {
	return (long long)(ncuts/2) * (ncuts - ncuts/2);
}

int main(int argc, char *argv[]) {
	int inputSize;
	cin>>inputSize;

	vector<long long> pieces;
	for(int i = 0; i < inputSize; i++) {
		int ncuts;
		cin>>ncuts;
		pieces.push_back(maxPieces(ncuts));
	}
	for(long long m : pieces)
		cout<<m<<endl;
}