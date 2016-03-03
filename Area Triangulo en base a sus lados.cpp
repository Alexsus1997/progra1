// Area Triangulo en base a sus lados.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "math.h"
#include <iostream>

using namespace std;

void main()
{
	float a,b,c,p,z;
	cout<<"Ingrese Operador 1: ";
	cin>>a;
	cout<<"Ingrese Operador 2: ";
	cin>>b;
	cout<<"Ingrese Operador 3: ";
	cin>>c;
	p=(a+b+c)/2;
	z=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"El àrea es; "<<z;
	getch();
}
