#include<iostream>
#include<vector>
using namespace std;

int minRange(vector<int> & widths, int start, int end) {
	int min = 3;
	for(int i = start; i <=end; i++)
		min = widths[i] < min ? widths[i] : min;
	return min;
}

int main(int argc, char * argv[]) {
	int N, inputSize, temp;
	cin>>N;
    cin>>inputSize;

    vector<int> largestVehicle, widths;
    
    for(int i=0 ;i<N;i++) {
    	cin>>temp;
    	widths.push_back(temp);
    }

    for(int k=0;k<inputSize;k++) {
    	int i,j;
    	cin>>i;
    	cin>>j;
    	largestVehicle.push_back(minRange(widths,i,j));
    }

    for(int lv : largestVehicle) 
    	cout<<lv<<endl;
}