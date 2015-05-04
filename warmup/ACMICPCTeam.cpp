#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

int count;

int maxTopicsKnown(vector<bitset<500>>& peopleKnowTopics) {
	/* N squared. Brute force! */
	int max=0, size = peopleKnowTopics.size();
	for(int i=0; i<size; i++)
		for(int j=0;j<size;j++) {
			if(i == j) continue;
			bitset<500> temp = peopleKnowTopics[i];
			temp |= peopleKnowTopics[j];		
			if(temp.count() > max) {
				max = temp.count();
				count = 1;
			}
			else if(temp.count() == max)
				count++;
		}
	return max;
}

int main(int argc, char * argv[]) {
	int n,m;
	cin>>n>>m;
	vector<bitset<500>> knowledgeBits;
	for(int i=0;i<n;i++) {
		string temp;
		cin>>temp;
		bitset<500> btemp(temp);
		knowledgeBits.push_back(btemp);
	}
	cout<<maxTopicsKnown(knowledgeBits)<<endl;
	cout<<count/2;

}