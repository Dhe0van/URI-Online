#include <iostream>
#include <cstdio>
using namespace std;

int main() {
		int ages, years, months, days;

		cin >> ages;
		
		years = ages / 365;
		months = ages % 365 / 30;
		days = ages % 365 % 30;

		printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", years, months, days);
}
