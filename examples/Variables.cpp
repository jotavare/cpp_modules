#include <iostream>

/*
 * Variables can either be on the stack or the heap;
 * The stack is a region of memory that is managed by the compiler;
 * The heap is a region of memory that is managed by the programmer;
 * Int can store positive INT_MAX and negative INT_MIN values;
 * The size of an int is 4 bytes. 4 bytes = 32 bits;
 * Signed variables, one of the bits is used to store the sign;
 * We can also use unsigned int, which can store 0 to UINT_MAX;
 */

int main()
{
    /*
     * unsigned char, short, int, long, long long;
     * float os 4 bytes and double is 8 bytes;
     * f at the end is to tell the compiler that this is a float;
     */

    bool variable = false;
    float variable = 5.5f;
    double var = 5.5;
    unsigned variable = 8;

    std::cout << variable << std::endl;
    std::cout << sizeof(bool) << std::endl;
    std::cin.get();
}