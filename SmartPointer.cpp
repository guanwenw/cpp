#include <iostream>

using namespace std;

class Person{
    int age;
    char* pName;

    public:
    Person(): pName(0),age(0){
    }

    Person(char* pName, int age): pName(pName), age(age){
    }

    ~Person(){
    }

    void Display(){
        printf("Name = %s Age = %d \n", pName, age);
    }

    void Shout(){
         cout << "Ooooooooooooooooo" << endl;
    }
};

int main()
{
    Person* pPerson  = new Person("Scott", 25);
    pPerson->Display();
    delete pPerson;
    return 0;
}
