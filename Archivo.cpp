#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <fstream>
#include "Archivo.h"


using namespace std;

Archivo::Archivo(){

}//constructor
Archivo::Archivo(ofstream file, string content){
  this->content=content;
  this->file=file;
}//constructor sobrecargado
Archivo::~Archivo(){

}//Destructor

ofstream Archivo::getFile(){
  return file;

}

string Archivo::getContent(){
  return content;
}

ostream& operator<<(ostream& out, Archivo& file) {
  this->getFile() << ( this->getContent() );
  out << this->getFile();
  return out;

}//Fin del metodo

istream& operator>>(istream& in, Archivo& file) {


}//Fin del metodo
