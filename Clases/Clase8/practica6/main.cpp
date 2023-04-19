#include <iostream>
#include <fstream>
#include "Cliente.h"
#include <stdlib.h>

using namespace std;

void pruebaCliente(){

    Cliente c;
    c.Setcedula(123);
    c.Setnombre("Juan");
    c.Setcuenta(5555);
    cout << c;

    Cliente c2;
    cout << "Ingrese los datos del cliente: cedula nombre cuenta" << endl;
    cin >> c2;
    cout << c2;
}

void lecturaArchivo() {
  ifstream is ("prueba.txt", ifstream::binary);
  if (is) {
    // get length of file:
    is.seekg (0, is.end);
    int length = is.tellg()+1;
    is.seekg (0, is.beg);

    char * buffer = new char [length];
    cout << "Leyendo " << length << " caracteres... " << endl;
    is.read (buffer,length);

    if (is)
      cout << "todos los caracteres leidos satisfactoriamente" << endl;
    else
      cout << "error: solo " << is.gcount() << " pudo ser leido" << endl;

    for(int i=0; i < length; i++){
        cout << buffer[i];
    }
    is.close();

    // ...buffer contains the entire file...
    delete[] buffer;
  }
  else {
    cout << "no pude abrir el archivo" << endl;
  }
}

void abrirArchivo() {
  ifstream file;
  file.open ("prueba.txt");
  if(file.fail())
    cerr << "Problemas al abrir el archivo\n";
  else {
      cout << "Lectura con get(), caracter a caracter"
           << endl;
      char c;
      while (file.get(c)) {   //while(!file.eof())
        cout << c;
      }
      file.close(); //cierre del flujo
  }
}
void lecturaLinea(string archivo) {
    const char* arc = archivo.c_str();
    ifstream file(arc);
    if(file.fail())
       cerr << "Problemas al abrir el archivo\n";
    else {
        cout << "Lectura con getline(), linea a linea" << endl;
        int n = 256;
        char line[n];
        //while(file.getline(line, n, enter)) {
        int i = 0;
        while(file.get(line[i++])) {
            //cout << line << enter;
        }
        cout << line;
        cout << endl;
        file.close();
    }
    delete[] arc;
}

void lecturaStreambuf() {
    ifstream file("prueba.txt");
    if(file.good()){
        streambuf* pbuf = file.rdbuf();
        //cuenta la cantidad de caracteres
        streamsize size = pbuf->pubseekoff(0,file.end);
        pbuf->pubseekoff(0,file.beg); //volver al principio

        char* contents = new char [size];
        pbuf->sgetn (contents, size);

        file.close();
        cout.write (contents,size);
        cout << endl;
        delete[] contents;
        delete pbuf;
    }
    else
      cerr << "Problemas al abrir el archivo\n";
}

void guardarTexto() {
    string linea =
      "Esta es una prueba de escritura en archivo";
    ofstream file("prueba.txt", ios::app);
    if(file.good()) {
        file << linea << enter;
        cout << "\nIngrese un Cliente: cedula nombre cuenta";
        Cliente c;
        cin >> c;
        file << c;
        file.flush();
        file.close();
        lecturaArchivo();
    }
    else {
        cerr << "Problemas al abrir el archivo\n";
    }
}

void guardarObjeto() {
	ofstream ofs("clientes.txt");
    Cliente c1(123445, "Rey_Juan_Carlos", 777);
	ofs << c1;      //guardamos el objeto en el archivo
	ofs.flush();
	ofs.close();
    system("PAUSE");

	ifstream ifs("clientes.txt");
	// leemos el objeto del archivo
	Cliente c2;
	if(ifs >> c2) {
		//lectura correcta, s2 cargado
		cout << c2 << endl;
		ifs.close();
	}
	else {
        cout << "Problemas al procesar el archivo";
	}
}

void escrituraBinario(){
    ofstream file ("prueba.txt",ifstream::binary);
    if(file.fail()) {
        cerr << "No pude abrir el archivo\n";
    }
    else {
        char ch;
        cout << "\nIngrese el texto. Escriba . para terminar" << endl;
        do {
           //getline (cin, linea);
           ch = cin.get();
           file.put(ch);
        } while (ch != '.');
        //const char* datos = linea.c_str();
        //file.write(datos, linea.size());
        file.flush();
        file.close();
        lecturaArchivo();
    }
}

int main() {
    cout << "Entrada - Salida de Datos" << endl;
    escrituraBinario();
    //guardarObjeto();
    //guardarTexto();
    //lecturaStreambuf();
    //lecturaLinea("prueba.txt");
    //abrirArchivo();
    //pruebaCliente();
    //lecturaArchivo();

    return 0;
}
