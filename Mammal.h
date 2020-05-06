#ifndef Mammal_h
#define Mammal_h
#include <string>
using namespace std;

class Mammal {    
  public:   
  Mammal() {
    cout << "Mammal constructor..." << endl; 
    age = 1;
  }     
  virtual void speak() = 0;  
  virtual void move() = 0;       
  virtual ~Mammal() {cout << "Mammal destructor..." << endl;}  

  protected:        
    int age;
};
#endif