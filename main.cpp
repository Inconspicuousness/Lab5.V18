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
        cerr << "���� Text_begin.txt �� ����� ���� ������ ��� ������!" << endl;
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
 
    cout << "������� ���������� ������� ������� (x, y, z): \n";
    cin >> a;
    cout << "������� ���������� ������� ������� (x, y, z): \n";
    cin >> b;
    cout << endl << "�������� �������� �� ������, ��������������� ����: ";

    while (choice != 10)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "����� ������� ������� = " << a.length(a) << endl;
            cout << "�������� ��������� ��������: ";
            break;
        case 2:
            cout << "����� ������� ������� = " << b.length(b) << endl;
            cout << "�������� ��������� ��������: ";
            break;
        case 3:
            cout << "a + b = " << a + b << endl;
            cout << "�������� ��������� ��������: ";
            break;
        case 4:
            cout << "a - b = " << a - b << endl;
            cout << "�������� ��������� ��������: ";
            break;
        case 5:
            cout << "1. �������� �� ��;\n2.�������� �� ����� ��������;\n3.�������� �� ����������;\n ";
            cin >> choice_constants;
            switch (choice_constants)
            {
            case 1:
                cout << "a * pi = " << a * pi << endl;
                cout << "�������� ��������� ��������: ";
                break;
            case 2:
                cout << "a * avogadro = " << a * avogadro << endl;
                cout << "�������� ��������� ��������: ";
                break;
            case 3:
                cout << "a * exponent = " << a * exponent << endl;
                cout << "�������� ��������� ��������: ";
                break;
            }
            break;
        case 6:
            cout << "1.�������� �� ��;\n2.�������� �� ����� ��������;\n3.�������� �� ����������;\n ";
            cin >> choice_constants;
            switch (choice_constants)
            {
            case 1:
                cout << "b * pi = " << b * pi << endl;
                cout << "�������� ��������� ��������: ";
                break;
            case 2:
                cout << "b * avogadro = " << b * avogadro << endl;
                cout << "�������� ��������� ��������: ";
                break;
            case 3:
                cout << "b * exponent = " << b * exponent << endl;
                cout << "�������� ��������� ��������: ";
                break;
            }
            break;
        case 7:
            cout << "��������� ������������ = " << a.scalar_product(a, b) << endl;
            cout << "�������� ��������� ��������: ";
            break;
        case 8:
            cout << "��������� ������������ = " << a.vector_product(a, b) << endl;
            cout << "�������� ��������� ��������: ";
            break;
        case 9:
            cout << "����� ������� ������� = " << a.length(a) << endl;
            cout << "����� ������� ������� = " << b.length(b) << endl;
            cout << "a + b = " << a + b << endl;
            cout << "a - b = " << a - b << endl;

            cout << "a * pi = " << a*pi << endl;
            cout << "a * avogadro = " << a*avogadro << endl;
            cout << "a * exponent = " << a*exponent << endl;

            cout << "b * pi = " << b*pi << endl;
            cout << "b * avogadro = " << b*avogadro << endl;
            cout << "b * exponent = " << b*exponent << endl;

            cout << "��������� ������������ = " << a.scalar_product(a, b) << endl;
            cout << "��������� ������������ = " << a.vector_product(a, b) << endl;
            cout << "�������� ��������� ��������: ";
            break;
        }
    }

    return 0;
}



