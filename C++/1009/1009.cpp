#include <iostream>
#include <string>
using namespace std;

double salary, sale_total, TOTAL;
string name;

int main() {
	// String user input
	cout << "";
	cin >> name;	
	// Integer user input
	scanf("%lf", &salary);
	scanf("%lf", &sale_total);
	
	double sale_percentage = 0.15 * sale_total;	
	TOTAL = sale_percentage + salary;

	printf("TOTAL = R$ %.2lf\n", TOTAL);
}
