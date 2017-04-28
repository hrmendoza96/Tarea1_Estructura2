#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <fstream>
#include "Archivo.h"


using namespace std;

Archivo::Archivo(){
  //this->fileContent.open("Archivo.txt");
}//constructor
Archivo::~Archivo(){

}//Destructor

ostream& operator<<(ostream& out, Archivo& file) {
  out << file.content << endl;
  return out;
}//Fin del metodo

istream& operator>>(istream& in, Archivo& file) {
  in.ignore();
  getline(in,file.content);
  //in >> file.content;
  return in;

}//Fin del metodo
