#include"Operacion.h"
#include<iostream>

using namespace std;

int main() {
	int t;
	cout << "Ingrese el tamaño: ";
	cin >> t;

	Operacion<int> arrayOps(t);

	arrayOps.ingreso();
	arrayOps.impresion();
	arrayOps.proceso();
	arrayOps.impresion();

	return 0;
}