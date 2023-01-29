#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Role Die Function
int RoleDie(int dSides)
{
    //Calculate Role Value
    int roleValue = (rand() % dSides) + 1;

    return roleValue;
}

int main()
{

    //Seed for Random
    srand((unsigned)time(0));

    //Var for Input Number from User
    int inputNumber;

    //Prompt User for Number of Sides
    cout << "Enter the number of sides for the die: ";

    //Store User Input Value
    cin >> inputNumber;

    //Roll Die and Display Message Back to User
    cout << "You rolled a " << RoleDie(inputNumber) << endl;

    //Prompt User for Another Roll
    cout << "Please enter another number of sides for a die roll: ";

    //Store User Input Value
    cin >> inputNumber;

    //Roll Second Die and Display Value
    cout << "You rolled a " << RoleDie(inputNumber) << endl;

    return 0;
}
