#include<iostream>
using namespace std;

int sumOfDigits(int n) {
	int sum=0;
	while(n) {
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int sumOfPrimeFactors(int number) {
	int divisor=2;
	int sum=0;
	while(number != 1) {
		while(number%divisor == 0) {			
			number /= divisor;
			sum += sumOfDigits(divisor);
		}
		divisor++;
	}
	return sum;
}

int main(int argc, char * argv[]) {
	int N;
	cin>>N;
	cout<<(sumOfPrimeFactors(N) == sumOfDigits(N))<<endl;
}