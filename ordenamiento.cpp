#include <iostream>
#include <array>
#include <ctime>

using namespace std;

#include<stdio.h>



/*
void mostrarLista(int *);

int main(int argc, char** argv){

	int lista[SIZE]={74,85,86,69,78,84,85,68};
	int n, l=SIZE,i,temp;

	mostrarLista(lista);


	do{
		n=0;
		//Recorrer la lista
		for(i=1;i<l;i++){
			//Verificar si los dos valores estan ordenados
			if(*(lista+i-1)>*(lista+i)){
				//Ordenar si es necesario
				temp=*(lista+i-1);
				*(lista+i-1)=*(lista+i);
				*(lista+i)=temp;
				n=i;
				mostrarLista(lista);
			}
		}
		l=n;
	}	while(n!=0);
	
}

//Función para mostrar estado de la lista

void mostrarLista(int *a){
  int i;
  for(i=0;i<SIZE;i++) printf("\t[%d]", *(a+i));
  printf("\n");
}


const int TAMANIO = 64000; // Numero de elementos en el arreglo

// Imprime hasta num_eiementos de un arreglo
void imprimirArreglo(array<int, TAMANIO > &arr, int num_elementos) { 
	for (int i = 0; i < arr.size() && i < num_elementos; i++) { 
		cout << arr[i] << endl;
	}
}

void ordenamientoBurbuja(array<int, TAMANIO> &arr) { 
	int tamanio = arr.size(); 
	bool desordenado = true;
	for (int pase = 0; pase < tamanio - 1 && desordenado; pase++) { 
		desordenado = false;
		for (int j = 0; j < tamanio - 1 - pase; j++) {
			if (arr[j] > arr[j + 1]) {
 				desordenado = true;
 				int temp = arr[j]; 
				arr[j] = arr[j+1];
 				arr[j+1] = temp;
			}
		}
	}
}
*/
int main() {
/*	array<int, TAMANIO> miArreglo;
	
	// Leer elementos del arreglo
	for (int i = 0; i < TAMANIO; i++) { 
		cin >> miArreglo[i];
	}

	clock_t inicio = clock(); 
	ordenamientoBurbuja(miArreglo);
 	clock_t fin = clock();

	double tiempoSegundos = double(fin - inicio) / CLOCKS_PER_SEC; // Tiempo transcurrido
	
	cout << "Cantidad de elementos: " << miArreglo.size() << endl;
	cout << "Tiempo transcurrido : " << tiempoSegundos << " segundos" << endl;
*/
char letras[] = {'J', 'U', 'V', 'E', 'N', 'T', 'U', 'D'};
char *ptr1, *ptr2;
char temp;
ptr1 = &letras[4];
cout << letras[5] << endl;


cout << letras[0] << letras[3] << letras[5]<<endl;
cout << "-------------------------------" << endl;
for (int i = 5; i > 2; i--)
  cout << letras[i] << " "<<endl;

cout << letras[letras.size() / 2];
cout << "-------------------------------" << endl;
cout << "PTR1 es: " << *ptr1 << endl;
temp = *(ptr1 - 3);
cout << "temp es: " << temp << endl;
ptr2 = ptr1 - 4; 
cout << "PTR2 es: " << *ptr2 << endl;
temp = *++ptr2;
cout << "temp es: " << temp << endl;
ptr1 = ptr2++;
cout << "PTR1 es: " << *ptr1 << endl;
cout << "-------------------------------" << endl;
cout << letras[0] << letras[3] << letras[5];
	return 0;
}

/*---------------------------------------------------------------------------------------------------------------------------------------*/
/*

using namespace std;
int main(int argc, char** argv) {
	
	char c = 'T', d = 'S';
char *p1 = &c;
char *p2 = &d;
char *p3;

p3 = &d;
cout << "*p3 = " << *p3 << endl;

cout << "-------------------------" << endl;
p3 = p1;
cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;

cout << "-------------------------" << endl;
*p1 = *p2;
cout << "*p1 = " << *p1  << ", p1 = " << p1 << endl;

/*
cout << "-------------------------" << endl;
int *p;
int i;
int k;
i = 42;
k = i;
p = &i; 
*p = 75;  
cout << "i vale " << i << endl;


cout << "-------------------------" << endl;
char c = 'A';
double *p = &c; 

*/

/*

char bloques[3] = {'A','B','C'};
 char *ptr = &bloques[0];
 char temp;
 temp = bloques[0];
 cout << "temp vale " << temp << endl;
  // __________
 temp = *(bloques + 2); // __________
 cout << "temp vale " << temp << endl;
 temp = *(ptr + 1); // __________
 cout << "temp vale " << temp << endl;
 temp = *ptr; // __________
 cout << "temp vale " << temp << endl;
 ptr = bloques + 1; // __________
 cout << "OJO ptr vale " << bloques << endl;
 temp = *ptr; // __________
 cout << "temp vale " << temp << endl;
 temp = *(ptr + 1); // __________
 cout << "temp vale " << temp << endl;
 ptr = bloques; // __________
 cout << "ptr vale " << ptr << endl;
 temp = *++ptr; // __________
  cout << "ptr vale " << ptr << endl;
 temp = ++*ptr; // __________
  cout << "ptr vale " << ptr << endl;
 temp = *ptr++; // __________
  cout << "ptr vale " << ptr << endl;
 temp = *ptr; // __________
  cout << "ptr vale " << ptr << endl;
  
 
	return 0;
}
 */

