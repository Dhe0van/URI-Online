#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int time, hours, minutes, seconds;
	cin >> time;

	if (time >= 60) {
			minutes = time / 60;
			seconds = time % 60; 
	}
	else {
			minutes = 0;
			seconds = time;
	}

	if (minutes >= 60) {
			hours = minutes / 60;		
			minutes -= hours*60;
	}
	else {
			hours = 0;
	}


	printf("%i:%i:%i\n", hours, minutes, seconds);
}
