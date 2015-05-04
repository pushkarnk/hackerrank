#include<iostream>
#include<vector>
using namespace std;
typedef long long llong;

int ndivisors(llong number) {
	int count = 0, place = 1;	
	llong temp = number, divisor;
	while(temp) {
		divisor = temp%10;
		if(divisor && !(number%divisor))
			count++;
		temp /= 10;		
	}
	return count;
}

int main(int argc, char * argv[]){
	int inputSize,number;
	cin>>inputSize;

	vector<int> answers;
	for(int i=0;i<inputSize;i++) {
		cin>>number;
		answers.push_back(ndivisors(number));
	}

	for(int answer : answers)
		cout<<answer<<endl;
}