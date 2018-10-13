#include "dessertItem.h"
#include "Icecream.h"
#include "Sundae.h"
#include <iostream>
#include <string>
using namespace std;

Sundae::Sundae(double costOfTopping, bool type, int numberOfScoops, string dessertName)
: 
Icecream(type, numberOfScoops, dessertName)
// dessertItem(dessertName)
{
    setCostOfTopping(costOfTopping);
    setType(type);
    setNumberOfScoops(numberOfScoops);
    dessertItem::setName(dessertName);
} //  end constructor

void Sundae::setCostOfTopping(double aCostOfTopping){
    costOfTopping = aCostOfTopping;
}

double Sundae::getCostOfTopping(){
    return costOfTopping;
}

void Sundae::print(){

    dessertItem::print();

    cout << getNumberOfScoops() << " scoops";
    if (Icecream::getType() == true){
        cout << " + cone" << endl;
    }
    else
        cout << endl;
    cout << "+ " << costOfTopping << " toppings" << endl;

} //  end function print

double Sundae::getCost(){
    double cost = (double)Icecream::getNumberOfScoops() + costOfTopping;

    if (Icecream::getType() == true){
        cost += 0.5;
    }
    return cost;
} //  end function getCost