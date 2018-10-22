#include "person.h"
#include <iostream>
using namespace std;

person::person(string aProffesion, int anAge){
    setProfession(aProffesion);
    setAge(anAge);
}   //  end constructor

void person::setProfession(string aProfession){
  profession = aProfession;
} //  end function setProfession

void person::setAge(int anAge){
    age = anAge;
}   //  end function setAge

string person::getProfession(){
    return profession;
}   //  end function getProfession

int person::getAge(){
    return age;
}   //  end function getAge

void person::display(){
    walk();
    talk();
}

void person::walk(){
    cout << "I can walk." << endl;
}

void person::talk(){
    cout << "I can talk." << endl;
}