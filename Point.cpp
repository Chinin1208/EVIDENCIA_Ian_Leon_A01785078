#include "Punto.h"

Punto::Punto() {
	x = 0;
	y = 0;
}

Punto::Punto(double x2, double y2) {
	x = x2;
	y = y2; 
}


double Punto::getX() {
	return x;
}

double Punto::getY() {
	return y;
}

void Punto::setX(double x2) {
	x = x2;
}

void Punto::setY(double y2) {
	y = y2;
}

double Punto::calculaDistancia(Punto p2) {
	return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
}

std::string Punto::str() {
	return '(' + std::to_string(x) + 'x' + std::to_string(y) + 'y';
}
