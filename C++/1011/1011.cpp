#include <iostream>
using namespace std;

int main() {
	double r;
	cin >> r;

	double volume = (4.0/3) * 3.14159 * (r*r*r);

	printf("VOLUME = %.3lf\n", volume);
}
