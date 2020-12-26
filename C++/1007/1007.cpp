#include <iostream>
using namespace std;

int A, B, C, D, DIFERENCA;

int main() {
	scanf("%i", &A);
        scanf("%i", &B);
        scanf("%i", &C);
        scanf("%i", &D);

	DIFERENCA = ((A*B) - (C*D));

	printf("DIFERENCA = %i\n", DIFERENCA);

}
