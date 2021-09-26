//
// Created by Adilet Kemelkhan on 26.09.2021.
//
#include <cstring>

using namespace std;

#ifndef ASSIGN2_PERSON_H
#define ASSIGN2_PERSON_H

#endif //ASSIGN2_PERSON_H

class Person{
public:
    Person(){
        this->name = "";
        this->age = 0;
        this->luck = 0;
    }
    Person(string Name, int Age, int Luck)
        : name(this->name)
        , age(this->age)
        , luck(this->luck)
        {
        this->name = Name;
        this->age = Age;
        this->luck = Luck;
    }
    void setName(string name){
        this->name = name;
    }
    void setAge(int Age){
        this->age = age;
    }
    void setLuck(int Luck){
        this->luck = Luck;
    }
    string getName(){
        return this->name;
    }
    int getAge(){
        return this->age;
    }
    int getLuck(){
        return this->luck;
    }
private:
    string name;
    int age;
    int luck;
};
