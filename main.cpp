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



