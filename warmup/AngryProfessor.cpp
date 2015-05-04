#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<iterator>
#include<algorithm>

using namespace std;

string angryProfessor(int k, vector<int>& times) {
	int count = 0;
	for(int t : times)
		if(t <= 0)
			count++;
	return count >= k ?"NO" : "YES";
}

int main(int argc, char * argv[]) {
	int size;
	vector<string> answers;
	cin>>size;

	for(int i=0;i<size;i++) {
		int n,k;		
		cin>>n; 
		cin>>k;
		vector<int> times;
		for(int i = 0; i < n; i++) {
			int t;
			cin>>t;
			times.push_back(t);
		}
		answers.push_back(angryProfessor(k,times));
	}
	
	for(string res : answers)
		cout<<res<<endl;
}