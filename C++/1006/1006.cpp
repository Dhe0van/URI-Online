#include <iostream>
using namespace std;

double A, B, C, MEDIA;

int main() {
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	MEDIA = ((A*2) + (B*3) + (C*5)) / (2 + 3 + 5);

	printf("MEDIA = %.1f\n", MEDIA);
}
