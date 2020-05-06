#ifndef Cat_h
#define Cat_h
#include <iostream>
#include "Mammal.h"
#include <string>
using namespace std;

class Cat: public Mammal  {    
  public:   
  Cat() {
    cout << "Cat constructor..." << endl; 
    age = 1;
  }     
  void speak() {cout << "Meow! Meow!\n";}  
  void move() {cout << "Cat moves a step\n";}       
  virtual ~Cat() {cout << "Cat destructor..." << endl;}  
};
#endif