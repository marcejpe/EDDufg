#include "cuentabancaria.h"

using namespace std; 

int main(){
	// Crear una cuenta bancaria
	CuentaBancaria miCuenta("A-480920", "lonathan Joestar", 2900.00); 
	cout << "Titular: " << miCuenta.getNombreTitular() << endl; 
	cout << "# Cuenta: " << miCuenta. getNumeroCuenta() << endl; 
	cout << "Saldo: $" << miCuenta.getSaldo() << endl; 
	cout << " __________________" << endl;

	// Creando otra cuenta
	CuentaBancaria cuentaAmigo("C-165426", "Arale Guitierrez", 784661.00); 
	cout << "Titular: " << cuentaAmigo.getNombreTitular() << endl; 
	cout << "# Cuenta: " << cuentaAmigo.getNumeroCuenta() << endl; 
	cout << "Saldo: $" << cuentaAmigo. getSaldo() << endl;
 	cout << " __________________" << endl;

	// Creando otra cuenta
	CuentaBancaria cuentaNoValida("A-354698", "John Cena", -500.00); 
	cout << "Titular: " << cuentaNoValida.getNombreTitular() << endl; 
	cout << "# Cuenta: " << cuentaNoValida.getNumeroCuenta() << endl; 
	cout << "Saldo: $" << cuentaNoValida.getSaldo() << endl;
 	cout << " __________________" << endl;

	// Hacer un retiro de la cuenta miCuenta
	cout << "Quiero retirar $84 de la cuenta " << miCuenta.getNumeroCuenta() << endl; 
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl; 
	miCuenta.retirar(84);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl; 
	cout << " __________________" << endl;

	// Hacer un retiro de la cuenta miCuenta mayor al saldo disponible
	cout << "Quiero retirar $3500 de la cuenta " << miCuenta.getNumeroCuenta()<< endl; 
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl; 
	miCuenta.retirar(3500); 
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl; 
	
	// Hacer un retiro de un monto negativo
	cout << "Quiero retirar -$725 de la cuenta " << miCuenta.getNumeroCuenta() << endl; 
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl; 
	miCuenta.retirar(-725);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
 	cout << " __________________" << endl;
 	
	// Hacer un retiro de La cuenta miCuenta
	cout << "Quiero depositar $125000 a la cuenta " << miCuenta.getNumeroCuenta() << endl;
	 cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
 	miCuenta.depositar(125000);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
 	cout << " __________________" << endl;

	// Hacer un retiro de La cuenta miCuenta
	cout << "Quiero depositar $5000 a la cuenta " << miCuenta.getNumeroCuenta() << endl; 
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl; miCuenta.depositar(-5000);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	return 0;
}


	

