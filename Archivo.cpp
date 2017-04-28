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
  //out << file.open << endl;
  string STRING;
  ifstream infile;
  infile.open ("Archivo.txt");
    while(!infile.eof()) // To get you all the lines.
    {
      getline(infile,STRING); // Saves the line in STRING.
      out << STRING;
    }
     infile.close();
  return out;
}//Fin del metodo

istream& operator>>(istream& in, Archivo& file) {
  in.ignore();
  getline(in,file.content);
  ofstream archivo4;
  archivo4.open("Archivo.txt");
  archivo4 << file.content;
  return in;

}//Fin del metodo
