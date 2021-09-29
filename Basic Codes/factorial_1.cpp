/**
 * @file factorial_1.cpp
 * @author BodaleDenis (denisbodale.work@gmail.com)
 * @brief This program implements factorial of a number N (using loop)
 * @date 2021-09-29
 */

#include <iostream>

int factorial(int number)
{
    int product = 1, iter; // Product should be initialised by 1 since 0 would produce 0 outcome on final result
    if(number < 0)
    {
        std::cout << "Impossible, factorial is available only for positive numbers";
    }
    else if(number == 0)
    {
        return 1; // 0! is equal to 1
    }
    else
    {
        for(iter = 1; iter <= number; iter++)
        {
            product = product * iter;
        }        
    }
    return product;

}

// Driver code

int main()
{
    int number;
    std::cout << "Choose the number to calculate factorial:" << "\n";
    std::cin >> number;
    std::cout << "Factorial of " << number <<" is " << factorial(number) << "\n";

    return 0;
}
