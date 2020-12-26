#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int spent_time, avg_speed;
	double liters_needed;

	cin >> spent_time >> avg_speed;

	liters_needed = (spent_time * avg_speed) / 12.0;

	printf("%.3lf\n", liters_needed);
}
