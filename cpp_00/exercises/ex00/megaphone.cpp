#include <iostream>
#include <string>

std::string message_upper_case(std::string message)
{
    for(int i = 0; message[i]; i++)
    {
        message[i] = toupper(message[i]);
    }
    return message;
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0); 
    }
    for(int i = 1; i < argc; i++)
        std::cout << message_upper_case(argv[i]);
    std::cout << std::endl;
    return (0);
}