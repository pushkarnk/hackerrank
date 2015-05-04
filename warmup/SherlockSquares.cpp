#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long int64;

int numSquareNumbers(int64 a, int64 b) {
	int64 number = sqrt(a);
	int count = (number * number == a);
	while(++number * number <= b) 
		count++;
	return count;
}	

int main(int argc, char * argv[]) {
	vector<int> answers;
	int T, A, B;
	cin>>T;
	for(auto i=0;i<T;i++) {
		cin>>A>>B;
		answers.push_back(numSquareNumbers(A,B));
	}

	for(auto i=0;i<T;i++)
		cout<<answers[i]<<endl;
}