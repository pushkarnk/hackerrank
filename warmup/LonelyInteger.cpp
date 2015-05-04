#include<iostream>
#include<vector>

using namespace std;


int singleElement(vector<int> array) {
	int result = 0;
	for(int a : array)
		result ^= a;
	return result;
}

int main(int argc, char * argv[]) {
	int size,element;
	vector<int> array;

	cin>>size;
	for(int i=0;i<size;i++) {
		cin>>element;
		array.push_back(element);
	}
	cout<<singleElement(array);
	return 0;
}