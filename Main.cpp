#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Archivo.h"

using namespace std;

void menu();

int int main(int argc, char const *argv[]) {

  int opcion;
  do{
    menu();
    cin >> opcion;

  }while(opcion!=3);
  if(opcion==1){
    Archivo* file = new Archivo();
    string content;
    cout << "Escriba su contenido:"<< endl;
    cin >> content;
    file << content;


  }
  if(opcion==2){

  }
  if(opcion==3){
    cout << "Adios" << endl;
  }
  return 0;
}


void menu(){
  cout << "Tarea 1 | Estructura de Datos 2 | Harold Mendoza" << endl;
  cout << "1) Escribir en Archivo" << endl;
  cout << "2) Leer Archivo" << endl;
  cout << "3) Salir" << endl;
  cout << "Escoja su opcion: "<< endl;


}
