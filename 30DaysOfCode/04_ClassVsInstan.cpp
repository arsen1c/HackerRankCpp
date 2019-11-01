/********************************************************************************************************************************************
Write a Person class with an instance variable, "age", and a constructor that takes an integer, "initialAge", as a parameter. 
The constructor must assign "initialAge" to "age" after confirming the argument passed as "initialAge" is not negative; if a negative argument 
is passed as "initialAge", the constructor should set "age" to 0 and print << "Age is not valid, setting age to 0.". 

In addition, you must write the following instance methods:

yearPasses() should increase the  instance variable by .
amIOld() should perform the following conditional actions:
If age < 13, print You are young..
If  age >= 13 and age < 18, print You are a teenager..
Otherwise, print You are old..
***********************************************************************************************************************************************/

#include <iostream>
using namespace std;

class Person
{
    public:
    int age; // instance variable / Data member.
    Person(int initialAge);
    void yearPass(); // member function.
    void amIOld();
};

Person::Person(int initialAge)
{
    if(initialAge < 0)
        cout << "Age is not valid, setting to 0.\n";
    else
        age = initialAge;
}

void Person::yearPass()
{
    age++;
}

void Person::amIOld()
{
    if(age < 13)
        cout << "You are young.\n";
    else if(age >= 13 && age < 18)
        cout << "You are a teenager\n";
    else
        cout << "You are old\n";
}

// given
int main()
{
    int t;
    int age;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> age;
        Person p(age); 
        p.amIOld();
        cout << "Before 3 years: " << p.age << endl;
        for(int j = 0; j < 3; j++)
        {
            p.yearPass();
        }   
        cout << "After 3 years: " << p.age << endl;
        p.amIOld();
    }
}