#include<iostream>
using namespace std;
int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.13 calcula el cobro del cliente" << "\n";
	
	float galones, conversion;
	// Solicitar los valores al usuario
	std::cout << "Ingrese galones a convertir: ";
	std::cin >> galones;
	// Calcular conversion
	conversion= galones*3.785*8.20;
	// Mostrar los resultados
	std::cout << "El pago es: " << conversion << std::endl;
	return 0;
}
