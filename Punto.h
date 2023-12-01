
#ifndef Punto_h
#define Punto_h

#include <stdio.h>
#include <string>
#include <math.h>

class Punto
{
private:
	double x, y;

public:
	// Métodos constructores
	Punto();
	Punto(double _x, double _y);

	// Métodos de acceso
	double getX();
	double getY();

	// Métodos modificadores
	void setX(double _x);
	void setY(double _y);

	// Otros métodos
	double calculaDistancia(Punto p2);
	std::string str();
};

#endif#pragma once
