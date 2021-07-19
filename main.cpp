#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; 

int main() {
	
	int opcion = 0; 
	while (opcion != 4){
		cout << "-----------MENU-----------" <<endl; 
		cout << " 1) Ejercicio 1." <<endl; 
		cout << " 2) Ejercicio 2. " <<endl; 
		cout << " 3) Ejercicio 3. " <<endl; 
		cout << " 4) Salir. " <<endl; 
		cout << "--------------------------" <<endl; 
		cout << "Ingrese la opcion: " <<endl; 
		cin >> opcion; 
		switch (opcion){
			case 1:
				{
				int n = 0;
				bool v = false;
				while (v == false){
					cout << "--------DIBUJAR TABLERO--------" <<endl; 
					cout << "Ingrese la cantidad n para filas y columnas: " <<endl;  
					cin >> n; 
					if (n <= 0){
						v = false; 
						cout << "Numero ingresado no valido. " <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while de entrada. 
				int color = 0; 
				for (int c = 0; c < n; c++){
					for (int j = 0; j < n; j++){
						if (color == 0){
							cout << color;
							color = 1;  
						}else {
							cout << color;  
							color = 0;
						}
					}
					cout <<endl; 
					if (color == 0){
						color = 1;  
					}else {  
						color = 0;
					}
				}
				cout << "-------FIN DIBUJAR TABLERO-------" <<endl;
				cout <<endl;
				break; 
				}
			case 2: 
				{
				int limite = 0;
				bool v = false;
				while (v == false){
					cout << "--------SUMATORIA--------" <<endl; 
					cout << "Ingrese el limite de la sumatoria: " <<endl; 
					cin >> limite; 
					if (limite <= 1){
						v = false; 
						cout << "Numero ingresado no valido. " <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while de entrada. 
				double sumatoria = 0; 
				for (int c = 1; c <= limite; c++){
					int parentesis = c - 1; 
					int afuera = 2 * c; 
					int operacion = parentesis * afuera; 
					sumatoria += operacion; 
				}
				cout << "El resultado de la sumatoria es: " << sumatoria <<endl; 
				cout << "-------FIN SUMATORIA-------" <<endl;
				cout << endl; 
				break; 
				}
			case 3: 
				{
				int iteraciones = 0;
				double n = 0; 
				bool v = false;
				while (v == false){
					cout << "--------RAIZ CUADRADA--------" <<endl; 
					cout << "Ingrese el numero a evaluar (puede ser decimal): " <<endl; 
					cin >> n;
					cout << "Ingrese el numero de iteraciones: (mayor a 10 y entero)" <<endl; 
					cin >> iteraciones;  
					if (iteraciones <= 10 || n <= 0){
						v = false; 
						cout << "Numeros ingresados no validos. " <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while de entrada. 
				double inicio = 0;  
				double mitad = 0; 
				double final = n; 
				bool validar = false; 
				for (int c = 0; c < iteraciones; c++){
					mitad = (double) (final + inicio) / 2;
					double verificar = mitad * mitad; 
					if (verificar == n){
						cout << "El resultado de la raiz cuadrada es: " <<  mitad <<endl;
						validar = true; 
						break;  
					}else if (verificar > n){
						final = mitad; 
					}else if (verificar < n){
						inicio = mitad; 
					}
				}//Fin del for. 
				if (validar == false){
					cout << "El resultado de la raiz cuadrada (aproximado) es: " <<  mitad <<endl;
				}
				cout << "-------FIN RAIZ CUADRADA-------" <<endl;
				cout << endl; 
				break; 
				//jejejejehhejejejejejejejejejejjejejeej
				//rhrhrhrhhrhrhrhrhrhr
				}
		}//Fin del switch 
	}//Fin del while
	
	return 0;
}