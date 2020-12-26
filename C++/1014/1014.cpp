#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int x; // total distance
	double y; // fuel total

	cin >> x >> y;

	double average = x / y;

	printf("%.3f km/l\n", average);
}
