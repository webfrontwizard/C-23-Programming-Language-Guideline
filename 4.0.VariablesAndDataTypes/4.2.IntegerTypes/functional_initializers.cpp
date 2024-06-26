#include <iostream>

int main()
{
    // *Functional Initialization

    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    // Information lost. less safe than braced initializers
    int narrowing_conversion_functional(2.9);

    std::cout << "Apple count : " << apple_count << std::endl;
    std::cout << "Orange count : " << orange_count << std::endl;
    std::cout << "Fruit count : " << fruit_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl; // Will loose info

    return 0;
}