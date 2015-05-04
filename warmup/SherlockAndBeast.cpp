#include<iostream>
#include<string>
#include<vector>
using namespace std;

string constructString(int n5, int n3) {
	string decentNumber("");
	while(n5-- > 0)
		decentNumber.append("5");
	while(n3-- > 0)
		decentNumber.append("3");
	return decentNumber;
}

string largestDecentNumber (int N) {
	string minusOne("-1");
	//first put maximum number of 5s
	int numberOfFives = N/3*3;
	int numberOfThrees = N%3;	


	//start rolling back fives - 3 at a time making place for the 3s!
	while((numberOfThrees)%5!=0 && numberOfFives >= 0) {
		numberOfFives  -= 3;
		numberOfThrees += 3;
	}

	if(numberOfFives < 0)
		return minusOne;

	return constructString(numberOfFives,numberOfThrees);
}

int main(int argc, char * argv[]) {
	vector<string> answers;
	int T;
	cin>>T;

	for(auto i=0;i<T;i++) {
		int number;
		cin>>number;
		answers.push_back(largestDecentNumber(number));
	}

	for(auto answer : answers)
		cout<<answer<<endl;
}