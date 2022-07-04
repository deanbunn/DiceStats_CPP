#include <iostream>

int main()
{
    int dice_count{ 20 };
    int cup_count{ 40 };

    std::cout << "The number of dice is " << dice_count << std::endl;
    std::cout << "The number of cups are " << cup_count << std::endl;

    std::cout << "The positive range for type double is from "
        << std::numeric_limits<double>::min() << " to "
        << std::numeric_limits<double>::max() << std::endl;


    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Currently, variable i is " << i << std::endl;
    }

}