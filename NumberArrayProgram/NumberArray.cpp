#include "NumberArray.h"
#include <random>
#include <iostream>

const int DEFAULT_SIZE = 10;

NumberArray::NumberArray()
{
    NumberArray::data = new double[DEFAULT_SIZE]; // Dynamically allocates memory according to given size.

    for (int i = 0; i < size; i++)
    {
        NumberArray::data[i] = 0.0; // Assigns value to default for all indices in the array
    }
}

NumberArray::~NumberArray()
{
    delete[] NumberArray::data; // Frees up all allocated memory from data

    std::cout << "Memory de-allocated.\n"; // Prints message confirming memory release
}

