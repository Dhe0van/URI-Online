#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
		double money;
		int modulus_money, decomposed_money;
		
		cin >> money;
		modulus_money = money;
		decomposed_money = (money - modulus_money) * 100;

		if ((decomposed_money * 1000) % 10 == 9) {
				decomposed_money++;
		}

		cout << "NOTAS:" << endl;

		decomposed_money = modulus_money / 100;
		modulus_money = fmod(modulus_money, 100);
		printf("%i nota(s) de R$ 100.00\n", decomposed_money);

		decomposed_money = modulus_money / 50;
		modulus_money = fmod(modulus_money, 50);
		printf("%i nota(s) de R$ 50.00\n", decomposed_money);

		decomposed_money = modulus_money / 20;
		modulus_money = fmod(modulus_money, 20);
		printf("%i nota(s) de R$ 20.00\n", decomposed_money);

		decomposed_money = modulus_money / 10;
		modulus_money = fmod(modulus_money, 10);
		printf("%i nota(s) de R$ 10.00\n", decomposed_money);

		decomposed_money = modulus_money / 5;
		modulus_money = fmod(modulus_money, 5);
		printf("%i nota(s) de R$ 5.00\n", decomposed_money);

		decomposed_money = modulus_money / 2;
		modulus_money = fmod(modulus_money, 2);
		printf("%i nota(s) de R$ 2.00\n", decomposed_money);

		cout << "MOEDAS:" << endl;

		decomposed_money = modulus_money / 1;
		modulus_money = fmod(modulus_money, 1);
		printf("%i nota(s) de R$ 1.00\n", decomposed_money);

		decomposed_money = modulus_money / 50;
		modulus_money = fmod(modulus_money, 50);
		printf("%i nota(s) de R$ 0.50\n", decomposed_money);

		decomposed_money = modulus_money / 25;
		modulus_money = fmod(modulus_money, 25);
		printf("%i nota(s) de R$ 0.25\n", decomposed_money);

		decomposed_money = modulus_money / 10;
		modulus_money = fmod(modulus_money, 10);
		printf("%i nota(s) de R$ 0.10\n", decomposed_money);

		decomposed_money = modulus_money / 5;
		modulus_money = fmod(modulus_money, 5);
		printf("%i nota(s) de R$ 0.05\n", decomposed_money);

		decomposed_money = modulus_money / 1;
		modulus_money = fmod(modulus_money, 1);
		printf("%i nota(s) de R$ 0.01\n", decomposed_money);

}
