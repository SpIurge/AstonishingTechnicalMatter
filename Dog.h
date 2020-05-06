#ifndef Dog_h
#define Dog_h
#include "Mammal.h"
#include <iostream>
#include <string>
using namespace std;

class Dog: public Mammal {    
  public:   
  Dog() {
    cout << "Dog constructor..." << endl; 
    age = 1;
  }     
  void speak() {cout << "Woof! Woof!\n";}  
  void move() {cout << "Dog moves a step\n";}       
  virtual ~Dog() {cout << "Dog destructor..." << endl;}  
};
#endif