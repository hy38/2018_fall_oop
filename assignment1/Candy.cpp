#include "dessertItem.h"
#include "Candy.h"
#include <iostream>
#include <string>
using namespace std;

Candy::Candy(double weight, double pricePerPound, string dessertName)
    : dessertItem(dessertName)
{
  setWeight(weight);
  setPrice(pricePerPound);
  dessertItem::setName(dessertName);
} //  end constructor

void Candy::setWeight(double aWeight){
  candyWeight = aWeight;
} //  end function setWeight

double Candy::getWeight(){
  return candyWeight;
} //  end function getWeight

void Candy::setPrice(double aPrice){
  pricePerPound = aPrice;
} //  end function setPrice

double Candy::getPrice(){
  return pricePerPound;
} //  end function getPrice
    
void Candy::print(){
  
  dessertItem::print();
  cout << candyWeight << " pounds @" << pricePerPound << " per pound" << endl;
} //  end function print

double Candy::getCost(){
  return candyWeight * pricePerPound;
} //  end function getCost