// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::string first_name;
    double age;

    std::cout << "Please enter your first name and age\n";
    std::cin >> first_name >> age;
    std::cout << "Hello, " << first_name << " ( " << age*12 << " months old)\n";
    return 0;
}
