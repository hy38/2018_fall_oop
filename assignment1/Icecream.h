#ifndef ICECREAM_H
#define ICECREAM_H

#include "dessertItem.h"
#include <string>

using namespace std;

class Icecream : public dessertItem
{
  private:
    int numberOfScoops;
    bool isCone;

  public:
    Icecream(bool, int, string);
    //parameters: type, numberOfScoops, dessertName
    void setNumberOfScoops(int);
    int getNumberOfScoops();
    void setType(bool);
    bool getType();
    void print();
    double getCost();
};

#endif