#include <cstdio>
#include <iostream>
using namespace std;

int main() {
		double n1, n2, n3, n4;
		double another_score;

		cin >> n1 >> n2 >> n3 >> n4;

		double media_avg = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / (2 + 3 + 4 + 1);
		if (media_avg >= 7.0) {
			printf("Media: %.1f\n", media_avg);
			cout << "Aluno aprovado." << endl;
		}
		else if (media_avg < 5.0) {
			printf("Media: %.1f\n", media_avg);
			cout << "Aluno reprovado." << endl;
		}
		else {
			printf("Media: %.1f\n", media_avg);
			cout << "Aluno em exame." << endl;

			cin >> another_score;

			printf("Nota do exame: %.1f\n", another_score);

			double total_exam = (media_avg + another_score) / 2;

			if (total_exam >= 5.0) {
					cout << "Aluno aprovado." << endl;
					printf("Media final: %.1f\n", total_exam);
			}
			else if (total_exam < 5.0) {
					cout << "Aluno reprovado." << endl;
					printf("Media final: %.1f\n", total_exam);
			}
		}
}
