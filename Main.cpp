#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Archivo.h"

using namespace std;

void menu();

int main(int argc, char const *argv[]) {

  int opcion;
  do{
    menu();
    cin >> opcion;
    if(opcion==1){
      //Tomar el contenido que el usuario desea grabar en el archivo
      string content;
      cout << "Escriba su contenido:"<< endl;
      cin.ignore();
      getline(cin,content);

      ofstream file;
      file.open("Archivo.txt");
      Archivo* archivo = new Archivo(file, content);

      cout << *archivo << endl;



    }
    if(opcion==2){

    }
    if(opcion==3){
      cout << "Adios" << endl;
    }

  }while(opcion!=3);

  return 0;
}


void menu(){
  cout << "Tarea 1 | Estructura de Datos 2 | Harold Mendoza" << endl;
  cout << "1) Escribir en Archivo" << endl;
  cout << "2) Leer Archivo" << endl;
  cout << "3) Salir" << endl;
  cout << "Escoja su opcion: "<< endl;


}
