#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "animal.h"

using namespace std;

Horse::Horse(){};

void Horse::readInfo()
{
    fstream inFile;
    inFile.open(
        "/home/sanghyun1210/Desktop/2018_fall_oop/assignment5/ReadFiles/Horse.csv");

    string str;
    getline(inFile, str); //  Not Taking the First Line

    try
    {
        getline(inFile, str, ','); //  Name : Seabiscuit : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Horse::setName(str); //  name : string

        getline(inFile, str, ','); //  Color : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Horse::setColor(str);

        getline(inFile, str, ','); //  maneColor : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Horse::setManeColor(str);

        getline(inFile, str, ','); //  Age : int
        for (int i = 0; i < str.length(); ++i)

        {
            if (!isdigit(str[i]))
                throw 0;
        }
        Horse::setAge(stoi(str));

        getline(inFile, str, '\n'); //  Height : int
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (!isdigit(str[i]))
                throw 0;
        }
        Horse::setHeight(stoi(str));
        Horse::addOne(); //  height += 1
    }
    catch (char const *expn)
    {
        cout << "MyError : type must be 'string'" << endl;
        // exit(0);
    }
    catch (int expn)
    {
        cout << "MyError : type must be 'int'" << endl;
        exit(0);
    }
    inFile.close();
}

void Horse::printInfo()
{
    cout << "Horse Information: " << endl;
    cout << "Name: " << Horse::getName() << endl;
    cout << "Color: " << Horse::getColor() << endl;
    cout << "Mane Color: " << Horse::getManeColor() << endl;
    cout << "Age: " << Horse::getAge() << " (years)" << endl;
    cout << "Height: " << Horse::getHeight() << " (hands)" << endl;
}