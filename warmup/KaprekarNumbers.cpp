#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int numberOfDigits(long long n) {
	int count = 0;
	while(n) {
		n /= 10;
		count++;
	}
	return count;
}

int splitAndAdd(long long number, int splitPosition) {
	if(splitPosition > numberOfDigits(number))
		return -1;
	long long  divisor = pow(10,splitPosition);
	return number/divisor + number%divisor;
}

bool isKaprekarNumber(int number) {
	long long  numberSquared = (long long)number * number;
	int nDigitsNum = numberOfDigits(number);
	int nDigitsSq  = numberOfDigits(numberSquared);
	for(int pos = nDigitsNum; pos <= nDigitsSq; pos++  )
		return splitAndAdd(numberSquared,pos) == number;

	return false;
}

int main(int argc, char * argv[]) {
	int p, q;
	cin>>p>>q;

	vector<int> answers;
	for(int i=p; i<=q; i++)
		if(isKaprekarNumber(i))
			answers.push_back(i);

	if(answers.size() == 0)
		cout<<"INVALID RANGE"<<endl;

	for(int a : answers) 
		cout<<a<<" ";
	cout<<endl;

}