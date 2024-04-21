#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.16 imprime el area de un triangulo" << "\n";
    float l1;
    float l2;
    float l3;
    float S;
    float AU;
    float area;
	 	
     cout << "Ingrese l1 del triangulo: ";
	 cin >> l1;
	 cout << "Ingrese l2 del triangulo: ";
	 cin >> l2;
	 cout << "Ingrese l3 del triangulo: ";
	 cin >> l3;
     // Formula matematica para calcular S.
     S=(l1+l2+l3)/2; 
     //Formula para calcular el area mediante S
     AU=(S*(S-l1)*(S-l2)*(S-l3));
	 area= pow(AU,0.5);
	 cout << "El area de su triangulo es: " << area << endl;
	 cin.ignore();
	 cin.get(); 
	 // Detenemos el programa con estas dos funciones similar a la funcion system("pause");

}


