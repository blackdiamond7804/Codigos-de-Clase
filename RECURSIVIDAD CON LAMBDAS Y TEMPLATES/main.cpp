#include"Operacion.h"
#include<iostream>

using namespace std;

int main() {
	int t;
	cout << "Ingrese el tama�o: ";
	cin >> t;

	Operacion<int> arrayOps(t);

	arrayOps.ingreso();
	arrayOps.impresion();
	arrayOps.proceso();
	arrayOps.impresion();

	return 0;
}