//  MyArrayList.h
#ifndef MYARRAYLIST_H
#define MYARRAYLIST_H
#include <iostream>
using namespace std;

template <typename T>
class MyArrayList{ //  Class declaration
public:
  MyArrayList();
  MyArrayList(int x);
  bool addElement(T const &x);
  void printIt();

private:
  const static int DEFAULT_CAPACITY = 10;
  T *mass;
  int capacity = 0;
  int size = 0;
};

//  Implementation
template <typename T>
MyArrayList<T>::MyArrayList(){ //  A Default Constructor
  capacity = DEFAULT_CAPACITY;
  mass = new T[capacity];
}

template <typename T>
MyArrayList<T>::MyArrayList(int x){ //  Constructor
  capacity = x;
  mass = new T[capacity];
}

template <typename T>
bool MyArrayList<T>::addElement(T const &x){
  if (size == capacity)
  { // resize();

    T *temp = new T[capacity * 2];

    for (int i = 0; i < size; i++){ //  ArrayCopy from mass to temp
      temp[i] = mass[i];
    }

    delete[] mass;  //  delete memory for previous mass
    mass = temp;  // mass gets the 'temp'

    capacity = capacity * 2; //  resize
  }

  mass[size++] = x;

  return true;
}

template <typename T>
void MyArrayList<T>::printIt(){
  cout << "{ ";
  for (int i = 0; i < size - 1; i++){
    cout << mass[i] << ", ";
  }
  cout << mass[size - 1] << " ";
  cout << "}" << endl << endl;
}

#endif