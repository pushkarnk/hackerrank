#include<iostream>
#include<vector>
using namespace std;
typedef long long int64;

int64 minCost(int64 B, int64 W, int64 X, int64 Y, int64 Z) {
	int64 minimumTotalCost = 0;
	//find the cheaper among black and white
	int64 cheaper = X > Y ? Y : X;
	//buy all required number of cheaper items
	minimumTotalCost += (int64) cheaper==X ? cheaper * B : cheaper * W;
    
    //compare direct buying vs transformation cost and buy other items
    if(cheaper == X) {
    	minimumTotalCost +=  (int64)W*(Y < (X+Z) ? Y : (X+Z));
    } else {
    	minimumTotalCost +=  (int64)B*(X < (Y+Z) ? X : (Y+Z));
    }
    return minimumTotalCost;
}

int main(int argc, char * argv[]) {
	int64 T,B,W,X,Y,Z;
	cin>>T;
	vector<int64> answers;
	for(auto i=0; i<T;i++) {
		cin>>B>>W>>X>>Y>>Z;
		answers.push_back(minCost(B,W,X,Y,Z));
	}
	for(auto ans : answers) {
		cout<<ans<<endl;
	}
}