#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "animal.h"

using namespace std;

Dog::Dog() {}

void Dog::readInfo()
{
    fstream inFile;
    inFile.open(
        "/home/sanghyun1210/Desktop/2018_fall_oop/assignment5/ReadFiles/Dog.csv");

    string str;
    getline(inFile, str); //  Not Taking the First Line

    try
    {
        getline(inFile, str, ','); //  Name : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Dog::setName(str);

        getline(inFile, str, ','); //  Breed : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Dog::setBreed(str);

        getline(inFile, str, ','); //  Age : int
        for (int i = 0; i < str.length(); i++)
        {
            if (!isdigit(str[i]))
                throw 0;
        }
        Dog::setAge(stoi(str));

        getline(inFile, str, ','); //  Color : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Dog::setColor(str);

        getline(inFile, str, '\n'); //  Weight : int
        for (int i = 0; i < str.length(); i++)
        {
            if (!isdigit(str[i]))
                throw 0;
        }
        Dog::setWeight(stoi(str));
    }
    catch (int expn)
    {
        cout << "MyError : type must be 'int'" << endl;
        exit(0);
    }
    catch (char const *expn)
    {
        cout << "MyError : type must be 'string' " << endl;
        exit(0);
    }
    inFile.close();
}

void Dog::printInfo()
{
    cout << "Dog Information: " << endl;
    cout << "Name: " << Dog::getName() << endl;
    cout << "Breed: " << Dog::getBreed() << endl;
    cout << "Age: " << Dog::getAge() << " (years)" << endl;
    cout << "Color: " << Dog::getColor() << endl;
    cout << "Weight: " << Dog::getWeight() << " (pounds)" << endl;
}
void Dog::subtractTen()
{
    Dog::weight -= 10;
}