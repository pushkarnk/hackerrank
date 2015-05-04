#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void findCavities(int map[],int side,vector<int>&cavities) {
	
	for(int row=1;row<side-1;row++) {
		for(int col=1;col<side-1;col++) {
			int potentialCavity = map[row*side+col];
			if(potentialCavity > map[(row-1)*side+col] 
				&& potentialCavity > map[(row+1)*side+col]
				&& potentialCavity > map[row*side+(col-1)] 
				&& potentialCavity > map[row*side+(col+1)]) 
			{
				cavities.push_back(row*side+col);
			}

		}
	}
}

void getArray(vector<string> & input, int map[]) {
	int side = input.size();	
	for(int i=0;i<side;i++) {
		string digits = input[i];
		for(int j=0;j<side;j++) {			
			map[i*side + j] = digits[j]-'0';
		}
	}
}

void printMatrix(int map[],int side,vector<int>& cavities) {
	for(int index : cavities)
		map[index] = -1;
	for(int i=0;i<side;i++) {
		for(int j=0;j<side;j++)
			if(map[i*side+j] == -1)
				cout<<"X";
			else
				cout<<map[i*side+j];
		cout<<endl;
	}
}

int main(int argc, char * argv[]) {
	int side;
	cin>>side;
	vector<string> input;
	for(int i=0;i<side;i++) {
		string temp;
		cin>>temp;
		input.push_back(temp);
	}
	int map[side*side];
	vector<int> cavities;
	getArray(input,map);
	findCavities(map,side,cavities);
	printMatrix(map,side,cavities);
	return 0;
}


