#include <iostream>
#include <math.h>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }

    double getx() {
        return x;
    }

    double gety() {
        return y;
    }

    void setx(double x2) {
        this->x = x2;
    }

    void sety(double y2) {
        this->y = y2;
    }
};

class Triangulo {
private:
    Point l1;
    Point l2;
    Point l3;

public:
    //constructor valores
    Triangulo(Point l11, Point l22, Point l33) {
        this->l1 = l11;
        this->l2 = l22;
        this->l3 = l33;
    }

    //Constructor
    Triangulo() {
        this->l1 = Point(0, 0);
        this->l2 = Point(50, 30);
        this->l3 = Point(25, 10);
    }

    double per() {
        double lado1 = sqrt(pow(l2.getx() - l1.getx(), 2) + pow(l2.gety() - l1.gety(), 2));
        double lado2 = sqrt(pow(l3.getx() - l2.getx(), 2) + pow(l3.gety() - l2.gety(), 2));
        double lado3 = sqrt(pow(l1.getx() - l3.getx(), 2) + pow(l1.gety() - l3.gety(), 2));
        double R = lado1 + lado2 + lado3;
        return R;
    }

    double ar() {
        double lado1 = sqrt(pow(l1.getx() - l1.getx(), 2) + pow(l2.gety() - l1.gety(), 2));
        double lado2 = sqrt(pow(l3.getx() - l2.getx(), 2) + pow(l3.gety() - l2.gety(), 2));
        double lado3 = sqrt(pow(l1.getx() - l3.getx(), 2) + pow(l1.gety() - l3.gety(), 2));
        double sum= (lado1 + lado2 + lado3) / 2;
        return sqrt(sum * (sum - lado1) * (sum - lado2) * (sum - lado3));
    }
};

int main() {
    Triangulo t1;

    cout << "El perimetro es de: " << t1.per() <<"\n";
    cout << "El area es de: " << t1.ar() << "\n";
    return 0;
}