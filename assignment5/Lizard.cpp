#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "animal.h"

using namespace std;

Lizard::Lizard(){};

void Lizard::readInfo()
{
    fstream inFile;
    inFile.open(
        "/home/sanghyun1210/Desktop/2018_fall_oop/assignment5/ReadFiles/Lizard.csv");

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
        Lizard::setName(str);

        getline(inFile, str, ','); //  Color : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Lizard::setColor(str);

        getline(inFile, str, ','); //  Habitat : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Lizard::setHabitat(str);

        getline(inFile, str, ','); //  Protected : bool
        if (str.compare("TRUE") == 0)
            Lizard::setProtected(true);
        else if (str.compare("FALSE") == 0)
            Lizard::setProtected(false);
        else
            throw false;

        getline(inFile, str, '\n'); //  Weight : int
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (!isdigit(str[i]))
                throw 0;
        }
        Lizard::setWeight(stoi(str));
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
    catch (int expn)
    {
        cout << "MyError : type must be 'int'" << endl;
        exit(0);
    }
    inFile.close();
}
void Lizard::printInfo()
{
    cout << "Lizard information: " << endl;
    cout << "Name: " << Lizard::getName() << endl;
    cout << "Color: " << Lizard::getColor() << endl;
    cout << "Habitat: " << Lizard::getHabitat() << endl;
    cout << "Protected: " << Lizard::convertBool(Lizard::getProtected()) << endl;
    cout << "Weight: " << Lizard::getWeight() << " (ounces)" << endl;
}

string Lizard::convertBool(bool value)
{
    if (value == true)
        return "TRUE";

    else
        return "FALSE";
}