#include<iostream>
using namespace std;
int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.11 calcula el cambio que se le entrega a un cliente" << "\n";
	
	float precio, pago, cambio;
	// Solicitar los valores al usuario
	std::cout << "Ingrese el precio del producto: ";
	std::cin >> precio;
	std::cout << "Ingrese pago del cliente: ";
	std::cin >> pago;
	// Calcular el cambio
	cambio= pago-precio;
	// Mostrar los resultados
	std::cout << "El cambio del pago es: " << cambio << std::endl;
	return 0;
}
	
