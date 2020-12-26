#include <iostream>
using namespace std;

double A, B, MEDIA;

int main() {
	scanf("%lf", &A);
	scanf("%lf", &B);

	MEDIA = ((A*3.5) + (B*7.5)) / (3.5 + 7.5);

	printf("MEDIA = %.5f\n", MEDIA);
}
