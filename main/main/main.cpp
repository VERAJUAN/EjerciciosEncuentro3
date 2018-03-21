// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int opcion, opcion2, a = 0xFFFFFFFF;
	int v[5];
	unsigned int b = 0xFFFFFFFF;
	bool flag;
	do{		
		printf("\n\nIngrese opcion:\n");
		cin >> opcion;
		flag = true;
		char c = 65.0;

		switch (opcion)
		{
		case 1:
			cout << "\nshort:" << sizeof(short);
			cout << "\nint:" << sizeof(int);
			cout << "\nfloat:" << sizeof(float);
			cout << "\ndouble:" << sizeof(double);
			cout << "\nlong:" << sizeof(long);
			cout << "\nlong long:" << sizeof(long long);
			cout << "\nsize_t:" << sizeof(size_t);
			break;
		case 2:			
			printf("\nDecimal: %d", c);
			printf("\nHexadecimal: %x", c);
			printf("\nOctal: %o", c);
			printf("\nCaracter: %c", c);
			break;
		case 3:
			cout << "\nMaximos:";
			cout << "\nshort:" << numeric_limits<short>::max;
			cout << "\nint:" << numeric_limits<int>::max;
			cout << "\nfloat:" << numeric_limits<float>::max;
			cout << "\ndouble:" << numeric_limits<double>::max;
			cout << "\nlong:" << numeric_limits<long>::max;
			cout << "\nlong long:" << numeric_limits<long long>::max;
			cout << "\nsize_t:" << numeric_limits<size_t>::max;
			cout << "\n\nMinimos:";
			cout << "\nshort:" << numeric_limits<short>::min;
			cout << "\nint:" << numeric_limits<int>::min;
			cout << "\nfloat:" << numeric_limits<float>::min;
			cout << "\ndouble:" << numeric_limits<double>::min;
			cout << "\nlong:" << numeric_limits<long>::min;
			cout << "\nlong long:" << numeric_limits<long long>::min;
			cout << "\nsize_t:" << numeric_limits<size_t>::min;
			break;
		case 4:
			cout << "\na:" << a;
			cout << "\nb:" << b;
			break;
		case 5:
			do {
				printf("\nMenu:\n1- Ingresar datos en el vector.\n2- Recorrer e imprimir los datos.\nIngresar opcion:");
				cin >> opcion2;
				switch (opcion2)
				{
				case 1:
					for (int i = 0; i < 5; i++) {
						cout << "\nIngresar valor entero a la posicion " << i << " del vector.";
						cin >> v[i]; 
					}
					break;
				case 2:
					cout << "\nImpresion de valores del vector.";
					for (int i = 0; i < 5; i++) {
						cout << v[i];
					}
					break;
				case 0:
					flag = false;
					break;
				default:
					printf("\nNo existe opcion ingresada.");
					break;
				}
			} while (flag);
			flag = true;
			break;
		case 0:
			flag = false;
			break;
		default:
			printf("\nNo existe opcion ingresada.");
			break;
		}
	}while (flag);
    return 0;
}

