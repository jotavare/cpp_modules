#include <iostream> // cout, endl
#include <cctype>   // toupper

/*
 * Note to myself: I can use elements from the standard library without using the prefix `std::`
 * Instead of std::cout or std::endl I can use cout or endl directly. (using namespace std;)
 *
 * Instead of std::endl which flushes the buffer, i can use '\n' which is faster.
 * Usually we flush to ensure that the output is printed immediately.
 * I don't think its necessary in this case.
 *
 * Could also use size_t instead of int because size_t is unsigned and int is signed,
 * semantically it's used to store size or index of an array, but since argc is of
 * type int, I'll use int.
 */

std::string messageUpperCase(char *str)
{
    std::string message;

    for (int i = 0; str[i]; i++)
        message += toupper(str[i]);
    return message;
}

int main(int argc, char **argv)
{
    std::string result;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++)
        result += messageUpperCase(argv[i]);
    std::cout << result << std::endl;
}
