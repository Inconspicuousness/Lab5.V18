Файл VectorCoordinates.cpp
#include "VectorCoordinates.h"
#include <iostream>
#include <cmath>
using namespace std;

VectorCoordinates& VectorCoordinates::operator= (const VectorCoordinates& v1)
{
    x = v1.x;
    y = v1.y;
    z = v1.z;
    return *this;
}

VectorCoordinates VectorCoordinates::operator+ (const VectorCoordinates& a)
{
    VectorCoordinates sum;
    sum.x = (a.x + x);
    sum.y = (a.y + y);
    sum.z = (a.z + z);
    return sum;
}

VectorCoordinates VectorCoordinates::operator- (const VectorCoordinates& a)
{
    VectorCoordinates sub;
    sub.x = (x - a.x);
    sub.y = (y - a.y);
    sub.z = (z - a.z);
    return sub;
}

VectorCoordinates VectorCoordinates::operator* (double value)
{
    VectorCoordinates mult;
    mult.x = x * value;
    mult.y = y * value;
    mult.z = z * value;
    return mult;
}

ostream& operator<< (ostream& out, const VectorCoordinates& v)
{
    out << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return out;
}

istream& operator>> (istream& in, VectorCoordinates& v)
{
    in >> v.x;
    in >> v.y;
    in >> v.z;
    return in;
}

double VectorCoordinates::scalar_product(VectorCoordinates& v1, VectorCoordinates& v2)
{
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}

double VectorCoordinates::length(VectorCoordinates& v1)
{
    return sqrt((v1.x * v1.x) + (v1.y * v1.y) + (v1.z * v1.z));
}

VectorCoordinates VectorCoordinates::vector_product(VectorCoordinates& v1, VectorCoordinates& v2)
{
    VectorCoordinates vec_prod;
    vec_prod.x = (v1.y * v2.z - v1.z * v2.y);
    vec_prod.y = (v1.z * v2.x - v1.x * v2.z);
    vec_prod.z = (v1.x * v2.y - v1.y * v2.x);
    return vec_prod;
}

Файл main.cpp

#include "VectorCoordinates.h"
#include "Constants.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using namespace constants;

int main()
{
    setlocale(LC_ALL, "Russian");

    ifstream inf("Text_begin.txt");
    if (!inf)
    {
        cerr << "Файл Text_begin.txt не может быть открыт для чтения!" << endl;
        exit(1);
    }
    while (inf)
    {
        string strInput;
        getline(inf, strInput);
        cout << strInput << endl;
    }

    int choice = 1;
    int choice_constants = 1;

    VectorCoordinates a, b;
 
    cout << "Введите координаты первого вектора (x, y, z): \n";
    cin >> a;
    cout << "Введите координаты второго вектора (x, y, z): \n";
    cin >> b;
    cout << endl << "Выберите действие из списка, представленного выше: ";

    while (choice != 10)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Длина первого вектора = " << a.length(a) << endl;
            cout << "Выберите следующее действие: ";
            break;
        case 2:
            cout << "Длина второго вектора = " << b.length(b) << endl;
            cout << "Выберите следующее действие: ";
            break;
        case 3:
            cout << "a + b = " << a + b << endl;
            cout << "Выберите следующее действие: ";
            break;
        case 4:
            cout << "a - b = " << a - b << endl;
            cout << "Выберите следующее действие: ";
            break;
        case 5:
            cout << "1. Умножить на Пи;\n2.Умножить на число Авогадро;\n3.Умножить на экспоненту;\n ";
            cin >> choice_constants;
            switch (choice_constants)
            {
            case 1:
                cout << "a * pi = " << a * pi << endl;
                cout << "Выберите следующее действие: ";
                break;
            case 2:
                cout << "a * avogadro = " << a * avogadro << endl;
                cout << "Выберите следующее действие: ";
                break;
            case 3:
                cout << "a * exponent = " << a * exponent << endl;
                cout << "Выберите следующее действие: ";
                break;
            }
            break;
        case 6:
            cout << "1.Умножить на Пи;\n2.Умножить на число Авогадро;\n3.Умножить на экспоненту;\n ";
            cin >> choice_constants;
            switch (choice_constants)
            {
            case 1:
                cout << "b * pi = " << b * pi << endl;
                cout << "Выберите следующее действие: ";
                break;
            case 2:
                cout << "b * avogadro = " << b * avogadro << endl;
                cout << "Выберите следующее действие: ";
                break;
            case 3:
                cout << "b * exponent = " << b * exponent << endl;
                cout << "Выберите следующее действие: ";
                break;
            }
            break;
        case 7:
            cout << "Скалярное произведение = " << a.scalar_product(a, b) << endl;
            cout << "Выберите следующее действие: ";
            break;
        case 8:
            cout << "Векторное произведение = " << a.vector_product(a, b) << endl;
            cout << "Выберите следующее действие: ";
            break;
        case 9:
            cout << "Длина первого вектора = " << a.length(a) << endl;
            cout << "Длина второго вектора = " << b.length(b) << endl;
            cout << "a + b = " << a + b << endl;
            cout << "a - b = " << a - b << endl;

            cout << "a * pi = " << a*pi << endl;
            cout << "a * avogadro = " << a*avogadro << endl;
            cout << "a * exponent = " << a*exponent << endl;

            cout << "b * pi = " << b*pi << endl;
            cout << "b * avogadro = " << b*avogadro << endl;
            cout << "b * exponent = " << b*exponent << endl;

            cout << "Скалярное произведение = " << a.scalar_product(a, b) << endl;
            cout << "Векторное произведение = " << a.vector_product(a, b) << endl;
            cout << "Выберите следующее действие: ";
            break;
        }
    }

    return 0;
}

Файл VectorCoordinates.h
#ifndef VECTORCOORDINATES_H
#define VECTORCOORDINATES_H
#include <iostream>
using namespace std;

class VectorCoordinates
{
private:
    double x, y, z;

public:

    VectorCoordinates(double x_ = 0.0, double y_ = 0.0, double z_ = 0.0) : x(x_), y(y_), z(z_)
    {
    }

    VectorCoordinates& operator= (const VectorCoordinates& v1);
    VectorCoordinates operator+ (const VectorCoordinates& a);
    VectorCoordinates operator- (const VectorCoordinates& a);
    VectorCoordinates operator*(double value);
    friend ostream& operator<< (ostream& out, const VectorCoordinates& v);
    friend istream& operator>> (istream& in, VectorCoordinates& v);
    double scalar_product(VectorCoordinates& v1, VectorCoordinates& v2);
    double length(VectorCoordinates& v1);
    VectorCoordinates vector_product(VectorCoordinates& v1, VectorCoordinates& v2);
};
#endif

Файл Constants.h
#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants
{
    const double pi(3.14159);
    const double avogadro(6.0221413e23);
    const double exponent(2.71828);
}
#endif

Файл Text_begin.txt
Константы: число Пи = 3.14159, число Авогадро = 6.0221413e23, Экспонента = 2.71828.

Добро пожаловать в программу для работы с векторами в трехмерном пространстве!
В ней Вы можете выполнять такие действия над векторами, как:

1.Вычислить длину первого вектора;
2.Вычислить длину второго вектора;
3.Сложить векторы;
4.Вычесть векторы;
5.Умножить первый вектор на константу (любую, из представленных выше);
6.Умножить второй вектор на константу (любую, из представленных выше);
7.Перемножить два вектора скалярно;
8.Перемножить два вектора векторно;
9.Все действия;
10.Завершение работы программы.
