#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
		double a, b, c;
		double r1, r2;

		cin >> a >> b >> c;

		double root = b*b - 4*a*c;

		if (root == 0 || root < 0 || a == 0) {
				printf("Impossivel calcular\n");
		} 
		else {
				r1 = (-b + (sqrt(root))) / (2*a);
				r2 = (-b - (sqrt(root))) / (2*a);

				printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
	
		}
}
