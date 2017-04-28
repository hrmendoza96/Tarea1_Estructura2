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
      friend ostream& operator<<(ostream&, Archivo&);
      friend istream& operator>>(istream&, Archivo&);


  private:
      string content;
      


};
