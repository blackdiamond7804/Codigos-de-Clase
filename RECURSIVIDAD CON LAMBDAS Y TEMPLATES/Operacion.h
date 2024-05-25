#pragma once
#include<iostream>

template<typename T>
class Operacion {
private:
	T* arr;
	int size;

public:
	Operacion(int);
	~Operacion();

	void setElemento(int, T);
	T getElemento(int) const;

	void ingreso();
	void impresion() const;
	void proceso();
};