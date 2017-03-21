#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    float a;
    float b;
    float c;


    cout << "------SUMA-------"<<endl<<endl;
    cout << "Ingrese el valor de a :";
    cin >> a;
    cout << "Ingrese el valor de b :";
    cin >> b;
    c= a + b;
    cout << "La suma de " << a << " + " << b << " es = " << c <<endl<<endl;
    cout << "------RESTA-------"<<endl<<endl;
    cout << "Ingrese el valor de a :";
    cin >> a;
    cout << "Ingrese el valor de b :";
    cin >> b;
    c = a - b;
    cout << "La resta de " << a << " - " << b << " es = " << c <<endl<<endl;
    cout << "------MULTIPLICACION-------"<<endl<<endl;
    cout << "Ingrese el valor de a :";
    cin >> a;
    cout << "Ingrese el valor de b :";
    cin >> b;
    c = a * b;
    cout << "La multiplicacion de " << a << " * " << b << " es = " << c <<endl<<endl;
    cout << "------DIVISION-------"<<endl<<endl;
    cout << "Ingrese el valor de a :";
    cin >> a;
    cout << "Ingrese el valor de b :";
    cin >> b;
    c = a / b;
    cout << "La division de " << a << " / " << b << " es = " << c <<endl;

    _getch();
    return 0;
}
