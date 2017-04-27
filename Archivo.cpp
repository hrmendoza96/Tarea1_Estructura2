#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <fstream>
#include "Archivo.h"


using namespace std;

Archivo::Archivo(){
  outfile.open("Archivo.txt");
}
Archivo::~Archivo(){

}

ofstream& operator<<(ofstream& out, Archivo& file) {
    file.open("Archivo.txt", ios::out | ios::app);

    file << 



}//Fin del metodo

ifstream& operator>>(ifstream& in, Archivo& file) {


}//Fin del metodo
