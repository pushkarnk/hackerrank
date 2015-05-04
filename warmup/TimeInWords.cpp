#include<iostream>
#include<string>
using namespace std;

string ones  [] = {"","one","two","three","four","five","six","seven","eight","nine", "ten", "eleven",
				  	"twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

string tens  [] = {"","","twenty","thirty","forty","fifty"};

string quarterPast("quarter past ");

string halfPast("half past ");

string quarterTo("quarter to ");

string onlyHours(int hours) {
	return ones[hours].append(" o'clock");
}

string oneQuarter(int hours) {	
	return quarterPast.append(ones[hours]);
}

string threeQuarters(int hours) {
	return quarterTo.append(ones[hours==12?1 : hours+1]);
}

string twoQuarters(int hours) {
	return halfPast.append(ones[hours]);
}

string lessThanThirty(int hours, int minutes) {
	string mins;
	if(minutes < 20)
		mins = ones[minutes];
	else {
		mins = tens[minutes/10];
		if(minutes%10)
			mins.append(" " + ones[minutes%10]);
	}
	return mins + (minutes==1?" minute ":" minutes ") + "past " + ones[hours];
}

string moreThanThirty(int hours, int minutes) {
	string mins;
	minutes = 60 - minutes;
	if(minutes < 20)
		mins = ones[minutes];
	else {
		mins = tens[minutes/10];
		if(minutes%10)
			mins.append(" " + ones[minutes%10]);
	}
	return mins + (minutes==1?" minute ":" minutes ") + "to " + ones[hours==12?1 : hours+1];
}

string inWords(int hours, int minutes) {
	if(minutes == 0)
		return onlyHours(hours);
	else if(minutes == 15)
		return oneQuarter(hours);
	else if(minutes == 45)
		return threeQuarters(hours);
	else if(minutes == 30)
		return twoQuarters(hours);
	else if (minutes < 30)
		return lessThanThirty(hours, minutes);
	else
		return moreThanThirty(hours, minutes);
}

int main(int argc, char * argv[]) {
	int H, M;
	cin>>H>>M;
	cout<<inWords(H,M);
}