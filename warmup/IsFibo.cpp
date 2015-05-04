#include<iostream>
#include<vector>
using namespace std;


bool isFibo(long long max) {
	long long a=0,b=1,c=0;
	
	while(c <= max) {
		c = a+b;
		if(c == max)
			break;
		a = b;
		b = c;
	}
	if(c > max)
		return false;
	else
		return true;
}

int main() {
	int inputSize;
	cin>>inputSize;

	vector<bool> answers;
	for(int i=0; i<inputSize;i++) {
		long long temp;
		cin>>temp;
		answers.push_back(isFibo(temp));
	}
	for(bool b : answers)
		if(b)
			cout<<"IsFibo"<<endl;
		else
			cout<<"IsNotFibo"<<endl;
}

