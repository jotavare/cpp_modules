#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
        if (i % 2 == 0)
            continue;
        std::cout << i << std::endl;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
        if (i % 2 == 0)
            break;;
        std::cout << i << std::endl;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
        if (i % 2 == 0)
            return (0);
        std::cout << i << std::endl;
    }
}