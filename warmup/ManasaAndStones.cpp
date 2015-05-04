#include<iostream>
#include<vector>
using namespace std;
typedef long long int64;

void possibleValues(vector<int64>& values, int N, int a, int b) {
	if(a == b) {
		values.push_back((N-1)*a);
		return;
	}

	int max = a > b ? a : b;
	int min = a < b ? a : b;
	for(auto i=0;i<N;i++)		
		values.push_back(min*(N-1-i)+i*max);
}

int main(int argc, char ** argv) {
	int N, a, b, T;
	cin>>T;
	vector<int64> answers[10];
	for(auto i=0; i<T;i++) {
		cin>>N>>a>>b;
		possibleValues(answers[i],N,a,b);
	}
	for(auto j=0; j<T;j++) {
		for(auto i : answers[j])
			cout<<i<<" ";
		cout<<endl;
	}
}