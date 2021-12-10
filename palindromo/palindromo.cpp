

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


void verificarPalindroma( TPila &p, string frase)
{
     TPila aux;     
     
    
     for(int i=0; i<frase.size(); i++)
          if(frase[i]==32)
              frase.erase(i,1);   
     
     
     for(int i=0; i<frase.size(); i++)
          push(p, frase[i]);    


     for(int i=0; i<frase.size(); i++)
     {
          aux = p;   
          
          if(frase[i]== aux->dato)
               pop( p );
          else
             break;
     }
     
     if( p==NULL)
        cout << "\n\t La frase ES UN PALINDROMO..." << endl;
     else
        cout << "\n\t La frase NO ES UN PALINDROMO..." << endl;
}



int main()
{
    TPila pila = NULL;   
    string frase;
    
    cout<<"\n-------------FRASE PALINDROMO \n\n";
    
    cout << " Ingrese palabra: ";
    getline(cin, frase);
    
    verificarPalindroma( pila, frase );
    
    cout<<"\n\n ";
    system("pause");
    return 0;
}
