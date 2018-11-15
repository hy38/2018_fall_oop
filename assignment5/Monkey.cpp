#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "animal.h"

using namespace std;

Monkey::Monkey(){};

void Monkey::readInfo()
{
    fstream inFile;
    inFile.open(
        "/home/sanghyun1210/Desktop/2018_fall_oop/assignment5/ReadFiles/Monkey.csv");

    string str;
    getline(inFile, str); //  Not Taking the First Line

    try
    {
        getline(inFile, str, ','); //  Name : Larry : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Monkey::setName(str); //  name : string

        getline(inFile, str, ','); //  Color : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Monkey::setColor(str);

        getline(inFile, str, ','); //  Age : int
        for (int i = 0; i < str.length() - 1; ++i)
        {
            if (!isdigit(str[i]))
                throw 0;
        }
        Monkey::setAge(stoi(str));

        getline(inFile, str, ','); //  Wild : bool

        if (str.compare("TRUE") == 0)
            Monkey::setWild(true);
        else if (str.compare("FALSE") == 0)
            Monkey::setWild(false);
        else
            throw false;

        getline(inFile, str, ','); //  Home : string
        for (int i = 0, count = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                count++;

            if (count == str.length())
                throw "s";
        }
        Monkey::setHome(str);

        getline(inFile, str, '\n'); //  Endangered : bool

        if (str.compare("TRUE") == 0)
            Monkey::setEndangered(true);
        else if (str.compare("FALSE") == 0)
            Monkey::setEndangered(false);
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
    catch (int expn)
    {
        cout << "MyError : type must be 'int'" << endl;
        exit(0);
    }
    inFile.close();
}

void Monkey::printInfo()
{
    cout << "Monkey Information: " << endl;
    cout << "Name: " << Monkey::getName() << endl;
    cout << "Color: " << Monkey::getColor() << endl;
    cout << "Age: " << Monkey::getAge() << endl;
    cout << "Wild: " << Monkey::convertBool(Monkey::getWild()) << endl;
    cout << "Home: " << Monkey::getHome() << endl;
    cout << "Endangered: " << Monkey::convertBool(Monkey::getEndangered()) << endl;
}

string Monkey::convertBool(bool value)
{
    if (value == true)
        return "TRUE";

    else
        return "FALSE";
}

void Monkey::changeEndangered()
{
    Monkey::setEndangered(!Monkey::getEndangered());
}