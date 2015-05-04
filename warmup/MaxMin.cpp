#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long int64;

int64 minimumUnfairness(vector<int64>& list, int N, int K) {
	int64 min = 1000000000 ,diff;
	for(auto p1=0,p2=K-1; p1<N-K; p1++, p2++)
		if((diff=list[p2]-list[p1]) < min)
			min = diff;
	return min;
}

int main(int argc, char * argv[]) {
	int N, K;
	cin>>N>>K;
	vector<int64> list;
	for(auto i=0;i<N;i++) {
		int64 temp;
		cin>>temp;
		list.push_back(temp);
	}
	sort(list.begin(),list.end());
	cout<<minimumUnfairness(list,N,K);
}