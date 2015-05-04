#include<iostream>
#include<list>
#include<vector>
using namespace std;


int cutSticks(vector<int>& sticks) {
	static int start = 0;	
	if(sticks.size()-start == 0) //no sticks left saar!
		return 0;
	int cut = sticks[start];
	int sticksCut = sticks.size() - start;
	for(int i=start;i<sticks.size();i++)
		if((sticks[i] -= cut) == 0)	
			start++;
	return sticksCut;
}

int main(int argc, char * argv[]) {
	int size,element,remaining;	
	cin>>size;
	list<int> sticks;
	for(int i=0;i<size;i++) {
		cin>>element;
		sticks.push_back(element);
	}
	sticks.sort();
	vector<int> sortedSticks;
	for(int stick : sticks)
		sortedSticks.push_back(stick);
	while((remaining=cutSticks(sortedSticks)) != 0)
		cout<<remaining<<endl;	
}