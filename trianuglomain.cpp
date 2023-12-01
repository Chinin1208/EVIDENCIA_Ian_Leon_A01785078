#include "Triangulo.h"


Triangulo::Triangulo() {
	v1 = Punto(0, 0);
	v2 = Punto(50, 30);
	v3 = Punto(25, 10);
}

Triangulo::Triangulo(Punto _v1, Punto _v2, Punto _v3) {
	v1 = _v1;
	v2 = _v2;
	v3 = _v3;
}

Punto Triangulo::getVertice1() {
	return v1;
}

Punto Triangulo::getVertice2() {
	return v2;
}

Punto Triangulo::getVertice3() {
	return v3;
}

void Triangulo::setVertice1(Punto _v1) {
	v1 = _v1;
}

void Triangulo::setVertice2(Punto _v2) {
	v2 = _v2;
}

void Triangulo::setVertice3(Punto _v3) {
	v3 = _v3;
}

double Triangulo::perimetro() {
	return v2.calculaDistancia(v1) + v3.calculaDistancia(v2) + v1.calculaDistancia(v3);
}

double Triangulo::area() {
	return 0.5 * abs(((v1.getX() * v2.getY()) + (v2.getX() * v3.getY()) + (v3.getX() * v1.getY())) -
		((v1.getX() * v3.getY()) + (v3.getX() * v2.getY()) + (v2.getX() * v1.getY())));
}


std::string Triangulo::str() {
	return v1.str() + ',' + v2.str() + ',' + v3.str();
}