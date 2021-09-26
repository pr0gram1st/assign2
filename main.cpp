#include <iostream>
#include <vector>
#include "Person.h"
#include <ctime>


using namespace std;

int main() {
    srand(time(NULL));
    vector < Person > persons;
    persons.push_back(Person("Adilet", 18, rand() % 100 + 1));
    persons.push_back(Person("Sanzhar", 30, rand() % 100 + 1));
    persons.push_back(Person("Andrey", 5, rand() % 100 + 1));
    persons.push_back(Person("Olzhas", 20, rand() % 100 + 1));
    persons.push_back(Person("Turar", 10, rand() % 100 + 1));
    Person luckiest = Person();
    for(int i = 0; i < persons.size(); ++i){
        if(luckiest.getLuck() < persons[i].getLuck()){
            luckiest = persons[i];
        }
    }
    cout << "The Luckiest is " << luckiest.getName() << " with luck " << luckiest.getLuck() << "\n";

    return 0;
}
