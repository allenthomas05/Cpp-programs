
//C++ Program to assign data to members of a structure variable and display it.
#include <iostream>
using namespace std;
//Defing Structure
   //when a structure is defined no memory is allocated
struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;  //Declaring structure Variables 
    //Memory is allocated in accordance to the structure variables that are created
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}