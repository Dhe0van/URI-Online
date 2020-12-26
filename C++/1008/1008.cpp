#include <iostream>
using namespace std;

int NUMBER, work_hour;
double SALARY, total;

int main() {
	scanf("%i", &NUMBER);
	scanf("%i", &work_hour);
	scanf("%lf", &SALARY);
	
	total = work_hour*SALARY;

	printf("NUMBER = %i\nSALARY = U$ %.2lf\n", NUMBER, total);
}
