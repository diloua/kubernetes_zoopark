#ifndef EQUESTRIAN_DISPLAY_H
#define EQUESTRIAN_DISPLAY_H
#include <string>
//Main superclass Animal
class Animal {
  private:
    int age;
    std::string name;
  public:
    Animal(std::string name, int age);
    std::string getName();
    void setName(std::string n_name);
    void setAge(int age_p);
    int getAge();
    //We initalize these methods as virtual so that it can override it in our subclass 
    virtual bool hasStripes(); 
    virtual bool isRideable();
    virtual std::string getType();
};
//Zebra subclass of Animal inherting Animal attributes
class Zebra: virtual public Animal {
  public: 
    Zebra(std::string name, int age);
    //These methods are overridden so that we can invoke them in our superclass Array
    bool hasStripes() override; 
    std::string getType() override;
};
//Horse subclass of Animal inheriting Animal attributes
class Horse: virtual public Animal {
  public: 
    Horse(std::string name, int age);
    bool isRideable() override;
    std::string getType() override;
};
//Zebroid inheriting from both Zebra and Horse
class Zebroid: public Zebra, public Horse {
  public: 
    Zebroid(std::string name, int age);
    std::string getType() final override;
};

#endif