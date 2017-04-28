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

  int opcion=0;
  do{
    menu();
    cin >> opcion;
    if(opcion==1){
      //Tomar el contenido que el usuario desea grabar en el archivo
      cout << "Escriba su contenido:"<< endl;
      Archivo archivo;
      cin >> archivo;
      cout << "\033[2J\033[1;1H";
      cout << "Su contenido:"<<endl;
      cout << archivo;
      cout << endl;
    }
    if(opcion==2){
      cout << "Adios" << endl;
    }

  }while(opcion!=2);

  return 0;
}


void menu(){
  cout << "Tarea 1 | Estructura de Datos 2 | Harold Mendoza" << endl;
  cout << "1) Escribir en Archivo" << endl;
  cout << "2) Salir" << endl;
  cout << "Escoja su opcion: "<< endl;


}
