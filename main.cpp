#include <iostream>
#include <vector>
#include "Person.h"
#include <ctime>


using namespace std;

void changeLuck(Person& a, Person& b){
    int m = a.getLuck();
    a.setLuck(b.getLuck());
    b.setLuck(m);
}

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

    Person *pers = new Person("Adik", 20, 123);

    //This object is not allocated in this program because it is not used further in code, while static memory allocation creates variables before code so the memory stays static.
    cout << "First person info: \n";
    cout << persons[0].getName() << " " << persons[0].getAge() << " " << persons[0].getLuck() << endl;
    cout << "Second person info: \n";
    cout << persons[1].getName() << " " << persons[1].getAge() << " " << persons[1].getLuck() << endl;

    changeLuck(persons[1], persons[0]);

    cout << "After change: \n";

    cout << "First person info: \n";
    cout << persons[0].getName() << " " << persons[0].getAge() << " " << persons[0].getLuck() << endl;
    cout << "Second person info: \n";
    cout << persons[1].getName() << " " << persons[1].getAge() << " " << persons[1].getLuck() << endl;

    delete pers;
    //here we are deleting object "pers" to free the memory in the computer storage that it took before. This is one of the biggest features of dynamic memory.

    return 0;
}
