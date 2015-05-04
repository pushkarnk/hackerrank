#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<vector>

using namespace std;

string songLength(string song) {
	char buffer[2];
	string lengths("");
	char * cSong = new char[song.length()+1];
	strcpy(cSong, song.c_str());
	char * cWord = strtok(cSong," ");
	while( cWord != 0) {
		snprintf(buffer,sizeof(buffer),"%d",strlen(cWord));
		lengths.append(buffer);
		cWord = strtok(NULL," ");
	}
	delete [] cSong;
	return lengths;
}

int main(int argc, char * argv[]) {
	vector<string> answers;
	string piSong("It's a pi song."), notPiSong("It's not a pi song.");
	string pi = "31415926535897932384626433833";
	string song;
	int T;
	cin>>T;	
	getline(std::cin,song);
	for(auto i=0;i<T;i++) {
		getline(std::cin,song);
		string wordLengths = songLength(song);
		int length = wordLengths.length();
		if(pi.compare(0,length,wordLengths) == 0)
			answers.push_back(piSong);
		else
			answers.push_back(notPiSong);
	}

	for(auto ans : answers)	
		cout<<ans<<endl;
}
