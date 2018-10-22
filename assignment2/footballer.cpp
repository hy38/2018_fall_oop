#include "person.h"
#include "footballer.h"
#include <iostream>
using namespace std;

footballer::footballer(string aProffesion, int anAge)
: person(aProffesion, anAge){
    person::setProfession(aProffesion);
    person::setAge(anAge);
    cout << "My profession is: " << person::getProfession() << endl;
    cout << "My age is: " << person::getAge() << endl;
}   //  end constructor

void footballer::playFootball(){
    cout << "I can play Football." << endl;
}