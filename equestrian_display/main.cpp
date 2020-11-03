#include<iostream>

#include "header/eq_display.h"

#include<algorithm>

using namespace std;

void Stage1(Animal * array[8]) {
  int i = 0;
  cout << "Stage 1: ";
  sort(array, array + 8, [](Animal * ft, Animal * st) { //We use the sort function form the <algorithm> library for the sorting
    return ft -> getName() < st -> getName();
  });

  for (i = 0; i < 9; i++) {
    cout << array[i] -> getName() << " ";
  }
}
void Stage2(Animal * array[8]) {
  int i = 0;
  cout << "Stage 2: ";
  sort(array, array + 8, [](Animal * ft, Animal * st) {
    return ft -> getAge() < st -> getAge();
  });

  for (i = 0; i < 9; i++) {
    cout << array[i] -> getName() << " ";
  }

}

void Stage3(Animal * array[8]) {
  int i;
  cout << "Stage 3: ";
  //Checking necessary conditions before each printing 
  for (i = 0; i < 9; i++) {
    if (array[i] -> isRideable() && array[i] -> hasStripes()) {
      cout << array[i] -> getName() << " ";;
    }
  }
  for (i = 0; i < 9; i++) {
    if (!(array[i] -> isRideable()) && array[i] -> hasStripes()) {
      cout << array[i] -> getName() << " ";;
    }
  }
  for (i = 0; i < 9; i++) {
    if (array[i] -> isRideable() && !(array[i] -> hasStripes())) {
      cout << array[i] -> getName() << " ";;
    }
  }

}

void Stage4(Animal * array[8]) {
  int i;
  cout << "Stage 4: ";
  for (i = 0; i < 9; i++) {
    if (array[i] -> getType() == "Horse") {
      cout << array[i] -> getName() << " ";;
    }
  }
  for (i = 0; i < 9; i++) {
    if (array[i] -> getType() == "Zebra") {
      cout << array[i] -> getName() << " ";;
    }
  }
  for (i = 0; i < 9; i++) {
    if (array[i] -> getType() == "Zebroid") {
      cout << array[i] -> getName() << " ";;
    }
  }

}

int main() {
  Animal * array[9]; //Initialize an Animal array to store all objects 
  //Constructing the objects
  Horse Hanni("Hanni", 7);
  Horse Holger("Holger", 3);
  Horse Hennes("Hennes", 2);
  Horse Hans("Hans", 11);

  Zebra Alex("Alex", 3);
  Zebra Anke("Anke", 8);
  Zebra Ann("Ann", 5);

  Zebroid Otto("Otto", 2);
  Zebroid Olga("Olga", 2);
  //Adding to the array
  array[0] = & Hanni;
  array[1] = & Holger;
  array[2] = & Hennes;
  array[3] = & Hans;
  array[4] = & Alex;
  array[5] = & Anke;
  array[6] = & Ann;
  array[7] = & Otto;
  array[8] = & Olga;
  //Calling each stage function with the object array initialized 
  Stage1(array);
  cout << endl;
  Stage2(array);
  cout << endl;
  Stage3(array);
  cout << endl;
  Stage4(array);
  cout << endl;
  return 0;

}
