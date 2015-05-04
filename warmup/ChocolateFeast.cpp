#include<iostream>
#include<vector>
using namespace std;

int withWrappers(int nwrappers, int cost) {
	int leftover = 0, count = 0;
	while(nwrappers) {
		int total = nwrappers+leftover;
		count += nwrappers = total/cost;
		leftover = total%cost;
	}
	return count;
}

int chocolates(int N, int C, int M) {
	return N/C + withWrappers(N/C,M);
}

int main(int argc, char *argv[]) {
	int inputSize, N, C, M;
	cin>>inputSize;

	vector<int> answers;
	for(int i=0; i<inputSize;i++) {
		cin>>N; 
		cin>>C;
		cin>>M;
		answers.push_back(chocolates(N,C,M));
	}

	for(int answer : answers)
		cout<<answer<<endl;
}