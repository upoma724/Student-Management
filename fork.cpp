#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:

    Person(string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    string getName() const {
        return name;
    }

    void setName(const string& newName) {
        name = newName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Age cannot be negative!" << endl;
        }
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {

    Person p("Alice", 30);


    p.display();

    p.setName("Bob");
    p.setAge(25);


    p.display();

    return 0;
}
