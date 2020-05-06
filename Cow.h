#ifndef Cow_h
#define Cow_h
#include <string>
#include "Mammal.h"
using namespace std;

class Cow: public Mammal  {    
  public:   
  Cow() {
    cout << "Cow constructor..." << endl; 
    age = 1;
  }     
  void speak() {cout << "Moo moo hoe\n";}  
  void move() {cout << "Cow moves a step\n";}   
  virtual ~Cow() {cout << "Cow destructor..." << endl;}  
};
#endif