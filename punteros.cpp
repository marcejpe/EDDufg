#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
  
  */
	return 0;
}
