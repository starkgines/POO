#include <iostream>
#include <vector>
#include "Nodo.h"
#include "Cola.h"


using namespace std;
void prueba1(){
    Cola<int> cola;
    int n = 20;
    try {
        for(int i = 0; i<n;i++){
          cola.insertar(i+1);
        }
        for(int i = 0; i<n;i++){
          cout << "Consultar: " << cola.ver();
          cout << " Eliminar:  " << cola.eliminar() << endl;
        }

        cout << "Eliminar:  " << cola.eliminar() << endl;
    }
    catch(bad_alloc &ba){ cout << ba.what() << endl; }
    catch(ColaVacia &cv){ cout << cv.what() << endl; }
    //cout << "Eliminar:  " << cola.eliminar() << endl;
}

int main()
{
    prueba1();
    system("PAUSE");

    //Cola<int> numeros;
    //Cola<Cliente> clientes;
    //Cola<Proceso> procesos;
    Cola<int> n;
    n.insertar(5);
    n.insertar(10);
    n.insertar(15);

    try{
      cout << "Consultar: " << n.ver() << endl;
      cout << "Eliminar: " << n.eliminar() << endl;
      cout << "Eliminar: " << n.eliminar() << endl;
      cout << "Consultar: " << n.ver() << endl;
    }
    catch(ColaVacia &cv){
        cout << "Ocurrio el sigte error: ";
        cout << cv.what()<< endl;
    }
    system("PAUSE");

    return 0;
}
