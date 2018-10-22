#include "person.h"
#include "mathTeacher.h"
#include <iostream>
using namespace std;

mathTeacher::mathTeacher(string aProffesion, int anAge)
: person(aProffesion, anAge){
    person::setProfession(aProffesion);
    person::setAge(anAge);
    cout << "My profession is: " << person::getProfession() << endl;
    cout << "My age is: " << person::getAge() << endl;
}   //  end constructor

void mathTeacher::teachMath(){
    cout << "I can teach Maths." << endl;
}