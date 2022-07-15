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
    //Not Sure What Exactly this Does Yet
    srand((unsigned)time(0));

    //Var for Input Number from User
    int inputNumber;

    //Prompt User for Number of Sides
    cout << "Enter the number of sides for the die: ";

    //Store User Input Value
    cin >> inputNumber;

    //Roll Die and Display Message Back to User
    cout << "You rolled a " << RoleDie(inputNumber) << endl;

    return 0;
}