#include"Operacion.h"
#include<iostream>
#include<cstdlib>

using namespace std;

template<typename T>
Operacion<T>::Operacion(int s) :size(s) {
	arr = new T[size];
}

template<typename T>
Operacion<T>::~Operacion() {
	delete[] arr;
}

template<typename T>
void Operacion<T>::setElemento(int index, T value) {
	if (index >= 0 && index < size) {
		arr[index] = value;
	}
}

template<typename T>
T Operacion<T>::getElemento(int index)const {
	if (index >= 0 && index < size) {
		return arr[index];
	}
	return T(); //Retorna un valor por defecto si el indice esta fuera de los limites
}

template<typename T>
void Operacion<T>::ingreso() {
	auto ingresoRecursivo = [&](auto& self, int index) -> void {
		if (index < size) {
			cout << "Ingrese el elemento" << index + 1 << ": ";
			cin >> arr[index];
			self(self, index + 1);
		}
	};
	ingresoRecursivo(ingresoRecursivo, 0);
}

template<typename T>
void Operacion<T>::impresion()const {
	auto impresionRecursiva = [&](auto& self, int index) -> void {
		if (index < size) {
			cout << arr[index] << " ";
			self(self, index + 1);
		}
	};
	cout << "{ ";
	impresionRecursiva(impresionRecursiva, 0);
	cout << "}" << endl;
}

template<typename T>
void Operacion<T>::proceso() {
	T escalar;
	cout << "Ingrese el escalar: ";
	cin >> escalar;

	auto procesoRecursivo = [&](auto& self, int index) -> void {
		if (index < size) {
			arr[index] *= escalar;
			self(self, index + 1);
		}
	};
	procesoRecursivo(procesoRecursivo, 0);
}

//Instancia de Template explicito para enteros

template class Operacion<int>;