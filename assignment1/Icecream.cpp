#include "dessertItem.h"
#include "Icecream.h"
#include <iostream>
#include <string>
using namespace std;

Icecream::Icecream(bool type, int numberOfScoops, string dessertName)
    : dessertItem(dessertName)
{
  setType(type);
  setNumberOfScoops(numberOfScoops);
  dessertItem::setName(dessertName);
} //  end constructor

void Icecream::setNumberOfScoops(int aNumber){
  numberOfScoops = aNumber;
} //  end function setNumberOfScoops

int Icecream::getNumberOfScoops(){
  return numberOfScoops;
} //  end function getNumberOfScoops

void Icecream::setType(bool aType){
  isCone = aType;
} //  end function setType

bool Icecream::getType(){
  return isCone;
} //  end function getType
    
void Icecream::print(){

  dessertItem::print();

  cout << numberOfScoops << " scoops";
  if (isCone == true){
    cout << " + cone" << endl;
  }
  else
    cout << endl;
} //  end function print

double Icecream::getCost(){
    double cost = numberOfScoops;
    if (isCone == true){
      cost += 0.5;
    }
    return cost;
} //  end function getCost