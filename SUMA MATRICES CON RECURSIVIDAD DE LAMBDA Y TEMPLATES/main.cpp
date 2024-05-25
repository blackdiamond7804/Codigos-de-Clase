#include"Matrix.h"
using namespace std;

int main() {
	int mat1[MAX][MAX], mat2[MAX][MAX];
	srand(time(NULL));

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			mat1[i][j] = rand() % 10;
			mat2[i][j] = rand() % 10;
		}
	}

	cout << "Matriz 1:" << endl;
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			cout << mat1[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl << "Matriz 2:" << endl;
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			cout << mat2[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "Suma de Matrices es: " << sumaRecursivaMatrices<int>(mat1, mat2, MAX - 1, MAX - 1) << endl;
	return 0;
}