#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int change, amount;
	int input_user;

	int banknotes[6] = {50, 20, 10, 5, 2, 1};	
	
	cin >> input_user;
	cout << input_user << endl;

	amount = input_user / 100;
	change = input_user % 100;

	printf("%i nota(s) de R$ 100,00\n", amount);

	for (int i = 0; i <= 5; i++) {
			amount = change / banknotes[i];
			change %= banknotes[i];

			printf("%i nota(s) de R$ %i,00\n", amount, banknotes[i]);
	}
}
