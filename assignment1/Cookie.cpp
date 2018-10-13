#include "dessertItem.h"
#include "Cookie.h"
#include <iostream>
#include <string>
using namespace std;

Cookie::Cookie(int numberOfCookies, double pricePerDozen, string dessertName)
    : dessertItem(dessertName)
{
  setNumberOfCookies(numberOfCookies);
  setPricePerDozen(pricePerDozen);
  dessertItem::setName(dessertName);
} //  end constructor

void Cookie::setNumberOfCookies(int aNumber){
  numberOfCookies = aNumber;
} //  end function setNumberOfCookies

double Cookie::getNumberOfCookies(){
  return numberOfCookies;
} //  end function getNumberOfCookies

void Cookie::setPricePerDozen(double aPrice){
  pricePerDozen = aPrice;
} //  end function setPricePerDozen

double Cookie::getPricePerDozen(){
  return pricePerDozen;
} //  end function getPricePerDozen
    
void Cookie::print(){
 
  dessertItem::print();
 
  cout << numberOfCookies << " cookies @" << pricePerDozen << " per dozen" << endl;
} //  end function print

double Cookie::getCost(){
  return numberOfCookies / 12 * pricePerDozen;
} //  end function getCost