#include <string>
#ifndef animal_h
#define animal_h
class Animal{

private:
  std::string name;
  std::string color;

public:
  Animal(){
    name = "";
    color = "";
  }
  //  get
  std::string getName() { return name; }
  std::string getColor() { return color; }
  //  set
  void setName(std::string _name) { name = _name; }
  void setColor(std::string _color) { color = _color; }

  virtual void readInfo() = 0;  //  read in private var values from file
  virtual void printInfo() = 0; //  prints the animal's information
};
#endif /* animal_h */

#ifndef DOG_H
#define DOG_H

class Dog : public Animal{

private:
  std::string breed;
  int age;
  int weight;

public:
  Dog();
  //  get
  std::string getBreed() { return breed; }
  int getAge() { return age; }
  int getWeight() { return weight; }
  //  set
  void setBreed(std::string _breed) { breed = _breed; }
  void setAge(int _age) { age = _age; }
  void setWeight(int _weight) { weight = _weight; }

  void readInfo();    //  read in private var values from file
  void printInfo();   //  prints the Dog's information
  void subtractTen(); //  subtracts 10 pounds from dog's weight as long as weight is > 10
};
#endif //  Dog class

#ifndef FISH_H
#define FISH_H
class Fish : public Animal{

private:
  bool freshwater;
  std::string habitat;
  bool predator;

public:
  Fish();
  //  get
  bool getFreshwater() { return freshwater; }
  std::string getHabitat() { return habitat; }
  bool getPredator() { return predator; }
  //  set
  void setFreshwater(bool _freshwater) { freshwater = _freshwater; }
  void setHabitat(std::string _habitat) { habitat = _habitat; }
  void setPredator(bool _predator) { predator = _predator; }

  void readInfo();                      //  read in private var values from file
  void printInfo();                     //  prints the Fish's information
  std::string convertBool(bool _value); //  for printing bool values in a user friendly way
};
#endif //  Fish class

#ifndef HORSE_H
#define HORSE_H

class Horse : public Animal{

private:
  std::string maneColor;
  int height;
  int age;

public:
  Horse();
  //  get
  std::string getManeColor() { return maneColor; }
  int getHeight() { return height; }
  int getAge() { return age; }
  //  set
  void setManeColor(std::string _maneColor) { maneColor = _maneColor; }
  void setHeight(int _height) { height = _height; }
  void setAge(int _age) { age = _age; }

  void readInfo();               //  read in private var values from file
  void printInfo();              //  prints the horse's information
  void addOne() { height += 1; } //  adds 1 hand to horse's height
};

#endif //  Horse class

#ifndef LIZARD_H
#define LIZARD_H
class Lizard : public Animal{

private:
  std::string habitat;
  bool isProtected;
  int weight;

public:
  Lizard();
  //  get
  std::string getHabitat() { return habitat; }
  bool getProtected() { return isProtected; }
  int getWeight() { return weight; }
  //  set
  void setHabitat(std::string _habitat) { habitat = _habitat; }
  void setProtected(bool _isProtected) { isProtected = _isProtected; }
  void setWeight(int _weight) { weight = _weight; }

  void readInfo();                      //  read in private var values from file
  void printInfo();                     //  prints the animals information
  std::string convertBool(bool _value); //  for printing bool values in user friendly way
};
#endif //  Lizard class

#ifndef MONKEY_H
#define MONKEY_H

class Monkey : public Animal{

private:
  bool wild;
  std::string home;
  bool endangered;
  int age;

public:
  Monkey();
  //  get
  bool getWild() { return wild; }
  std::string getHome() { return home; }
  bool getEndangered() { return endangered; }
  int getAge() { return age; }
  //  set
  void setWild(bool _wild) { wild = _wild; }
  void setHome(std::string _home) { home = _home; }
  void setEndangered(bool _endangered) { endangered = _endangered; }
  void setAge(int _age) { age = _age; }

  void readInfo();                      //  read in private var values from file
  void printInfo();                     //  prints the animals information
  std::string convertBool(bool _value); //  for printing bool values in user friendly way
  void changeEndangered();              //  switches the bool value of endangered to the opposite bool value
};

#endif //  Monkey class