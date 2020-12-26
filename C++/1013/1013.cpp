#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	int a, b, c, greatest;

	cin >> a >> b >> c ;

	if (a > b) {
		greatest = a;
	}
	else {
		greatest = b;
	}


	if (greatest > c) {
		greatest = greatest;
	}
	else {
		greatest = c;
	}

	cout << greatest << " eh o maior" << endl; 
}
