#include <cstdio>
#include <iostream>
using namespace std;

int main() {
		int x, y;
		double total;

		cin >> x >> y;

		switch (x) {
			case 1:
				total = y * 4;			
				break;

			case 2:
				total = y * 4.50;
				break;

			case 3:
				total = y * 5;
				break;

			case 4:
				total = y * 2;
				break;

			case 5:
				total = y * 1.50;
				break;
		}

		printf("Total: R$ %.2f\n", total);
}
