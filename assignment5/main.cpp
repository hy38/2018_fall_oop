#include <iostream>
#include "animal.h"
using namespace std;

int main(){

    Dog doggo;
    doggo.readInfo();
    doggo.subtractTen();
    doggo.printInfo();
    cout << endl;

    Fish fishy;
    fishy.readInfo();
    fishy.printInfo();
    cout << endl;

    Horse horsey;
    horsey.readInfo();
    horsey.printInfo();
    cout << endl;

    Lizard lizzy;
    lizzy.readInfo();
    lizzy.printInfo();
    cout << endl;

    Monkey hauman;
    hauman.readInfo();
    hauman.changeEndangered();
    hauman.printInfo();
    cout << endl;

    return 0;
}