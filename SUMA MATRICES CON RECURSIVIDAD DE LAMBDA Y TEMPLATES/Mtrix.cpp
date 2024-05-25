#include"Matrix.h"

template<typename T>
T sumaRecursivaMatrices(T mat1[MAX][MAX], T mat2[MAX][MAX], int f, int c) {
	auto sumMatrices = [&](auto& self, T mat1[MAX][MAX], T mat2[MAX][MAX], int f, int c) -> T {
		if ((f == 0) && (c == 0))
			return mat1[f][c] + mat2[f][c];
		else {
			if (c == 0)
				return mat1[f][c] + mat2[f][c] + self(self, mat1, mat2, f - 1, MAX - 1);
			else
				return mat1[f][c] + mat2[f][c] + self(self, mat1, mat2, f, c - 1);
		}
	};
	return sumMatrices(sumMatrices, mat1, mat2, f, c);
}

//Explicit template instantiation for int
template int sumaRecursivaMatrices<int>(int[MAX][MAX], int[MAX][MAX], int, int);