#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <fstream>

using namespace std;

class Archivo{
  public:
      Archivo();
      ~Archivo();
      //operador <<
      friend ofstream& operator<<(ostream&, Archivo&);
      //operador >>
      friend istream& operator>>(istream&, Archivo&);


  private:
    ofstream outfile;
    ifstream infile;







};
