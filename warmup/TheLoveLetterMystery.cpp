#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int palindromize(string & word, int start, int end) {
	if( start == -1)
		return 0;
	return palindromize(word,start-1,end+1) + abs(word[start]-word[end]);
}

int main(int argc, char* argv[]) {
	int inputSize;
	cin>>inputSize;

	vector<int> minSteps;
	for(int i=0;i<inputSize;i++) {
		string temp;
		cin>>temp;
		int l = temp.length();
		minSteps.push_back(
			l%2==0?palindromize(temp,l/2-1,l/2):palindromize(temp,l/2-1,l/2+1));
	}
	for(int m : minSteps) {
		cout<<m<<endl;
	}
}