#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct nodo{
      char dato;
      struct nodo *sgte;
};

typedef struct nodo *TPila;



TPila crearNodo(char x)
{
      TPila newNodo = new(struct nodo);
      newNodo->dato = x;
      return newNodo;
}


void push(TPila &top, char x)
{
     TPila aux = crearNodo(x);
     aux->sgte = top;
     top = aux;
}


char pop(TPila &top)
{
     int c ;
     TPila aux;
     
     aux = top ;
     c = aux->dato;   
     top = aux->sgte ;
     delete(aux);
     return c;
}


void verificarPalindroma( TPila &p, string cad)
{
     TPila aux;     
     
    
     for(int i=0; i<cad.size(); i++)
          if(cad[i]==32)
              cad.erase(i,1);  
     
     
     for(int i=0; i<cad.size(); i++)
          push(p, cad[i]);    



     for(int i=0; i<cad.size(); i++)
     {
          aux = p;   
          
          if(cad[i]== aux->dato)
               pop( p );
          else
             break;
     }
     
     if( p==NULL)
        cout << "\n\t La frase ES PALINDROMA..." << endl;
     else
        cout << "\n\t La frase NO ES PALINDROMA..." << endl;
}




int main()
{
    TPila pila = NULL;    
    string cad;
    
    cout<<"\n\t\tVERIFICAR FRASE PALINDROMA CON PILAS \n\n";
    
    cout << " Ingrese palabra: ";
    getline(cin, cad);
    
    verificarPalindroma( pila, cad );
    
    cout<<"\n\n ";
    system("pause");
    return 0;
}
