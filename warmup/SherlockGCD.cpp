#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b) {
	while( a != b) {
		if(a>b)
			a -= b;
		else
			b -=a;
	}
	return a;
}

string desiredSetExists(int numbers[], int N) {
	for(auto i=0; i<N; i++)
		for(auto j=0; j<N;j++)
			if(gcd(numbers[i],numbers[j]) == 1)
				return "YES";
	return "NO";
}

int main(int argc, char * argv[]) {
	int T, N;
	int numbers[100];
	vector<string> answers;
	cin>>T;
	for(auto i=0;i<T;i++) {
		cin>>N;
		for(auto j=0;j<N;j++)
			cin>>numbers[j]	;
		answers.push_back(desiredSetExists(numbers,N));
	}
	for(auto ans : answers)
		cout<<ans<<endl;
}