#include <cstdio>
#include <iostream>
#include <type_traits>
using namespace std;

int main() {
	int x, y;
	double value;

	cin >> x;

	cout << x << endl;

	value = x / 100;
	y = x % 100;
	printf("%.0f nota(s) de R$ 100,00\n", value);
	
	value = y / 50;
	y = y % 50;
	printf("%.0f nota(s) de R$ 50,00\n", value);
	
	value = y / 20;
	y = y % 20;
	printf("%.0f nota(s) de R$ 20,00\n", value);
	
	value = y / 10;
	y = y % 10;
	printf("%.0f nota(s) de R$ 10,00\n", value);

	value = y / 5;
	y = y % 5;
	printf("%.0f nota(s) de R$ 5,00\n", value);
	
	value = y / 2;
	y = y % 2;
	printf("%.0f nota(s) de R$ 2,00\n", value);
	
	value = y / 1;
	y = y % 1;
	printf("%.0f nota(s) de R$ 1,00\n", value);
}
