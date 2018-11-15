#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "animal.h"

using namespace std;

Fish::Fish(){};

void Fish::readInfo()
{
    fstream inFile;
    inFile.open(
        "/home/sanghyun1210/Desktop/2018_fall_oop/assignment5/ReadFiles/Fish.csv");

    string str;
    getline(inFile, str); //  Not Taking the First Line

    try
    {
        getline(inFile, str, ','); //  Name : Nemo : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Fish::setName(str); //  name : string

        getline(inFile, str, ','); //  Color : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Fish::setColor(str);

        getline(inFile, str, ','); //  Freshwater : bool

        if (str.compare("TRUE") == 0)
            Fish::setFreshwater(true);
        else if (str.compare("FALSE") == 0)
            Fish::setFreshwater(false);
        else
            throw false;

        getline(inFile, str, ','); //  Habitat : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Fish::setHabitat(str);

        getline(inFile, str, '\n'); //  Predator : bool

        if (str.compare("TRUE") == 0)
            Fish::setPredator(true);
        else if (str.compare("FALSE") == 0)
            Fish::setPredator(false);
        else
            throw false;
    }
    catch (char const *expo)
    {
        cout << "MyError : type must be 'string'" << endl;
        exit(0);
    }
    catch (bool a)
    {
        cout << "MyError : type must be 'bool'" << endl;
        exit(0);
    }
    inFile.close();
}
void Fish::printInfo()
{
    cout << "Fish Information: " << endl;
    cout << "Name: " << Fish::getName() << endl;
    cout << "Color: " << Fish::getColor() << endl;
    cout << "Freshwater: " << Fish::convertBool(Fish::getFreshwater()) << endl;
    cout << "Habitat: " << Fish::getHabitat() << endl;
    cout << "Predator: " << Fish::convertBool(Fish::getPredator()) << endl;
}

string Fish::convertBool(bool value)
{
    if (value == true)
        return "TRUE";

    else
        return "FALSE";
}