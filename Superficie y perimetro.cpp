#include <iostream>
using namespace std;
int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.10 calcula el area y el perimetro de un rectangulo" << "\n";
	
	float base, altura, area, perimetro;
	// Solicitar las medidas del rectangulo al usuario
	std::cout << "Ingrese la base del rectangulo: ";
	std::cin >> base;
	std::cout << "Ingrese la altura del rectangulo: ";
	std::cin >> altura;
	// Calcular el area y el perimetro
	area = base * altura;
	perimetro= 2 * (base + altura);
	// Mostrar los resultados
	std::cout << "El area del rectangulo es: " << area << std::endl;
	std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;
	return 0;
}
