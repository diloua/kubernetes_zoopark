#include "header/eq_display.h"

#include <iostream>

#include <string>

using namespace std;

//Initializing constructors the superclass and the inheriting classes
Animal::Animal(string n_name, int n_age) {
  name = n_name;
  age = n_age;
}
Horse::Horse(string n_name, int n_age): Animal(n_name, n_age) {}
Zebra::Zebra(string n_name, int n_age): Animal(n_name, n_age) {}
Zebroid::Zebroid(string n_name, int n_age): Horse(n_name, n_age), Zebra(n_name, n_age), Animal(n_name, n_age) {}

//Initializing the methods for each class
string Animal::getName() {
  return name;
}
void Animal::setName(std::string n_name) {
  name = n_name;
}
int Animal::getAge() {
  return age;
}
void Animal::setAge(int age_p) {
  age = age_p;
}

std::string Animal::getType() {
  return "Animal";
}

std::string Zebra::getType() {
  return "Zebra";
}
std::string Horse::getType() {
  return "Horse";
}

std::string Zebroid::getType() {
  return "Zebroid";
}

bool Animal::isRideable() {
  return 0;
}

bool Animal::hasStripes() {
  return 0;
}
bool Horse::isRideable() {
  return 1;
}

bool Zebra::hasStripes() {
  return 1;
}
