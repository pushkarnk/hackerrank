#include<iostream>
#include<cmath>
using namespace std;
typedef long long int64;

double updateAverage(int64 a, int64 b, int64 k, int64 n) {
	return (double)(b-a+1)*k/n;
}

int main(int argc, char * argv[]) {
	int N, M, A, B, K;
	cin>>N>>M;
	double average = 0;
	for(auto i=0; i<M;i++) {		
		cin>>A>>B>>K;
		average += updateAverage(A,B,K,N);
	}
	cout<<(int64)average<<endl;
}