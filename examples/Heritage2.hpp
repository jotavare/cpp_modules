#include <string>

class Animal
{
private:
    int _numberOfLegs;

public:
    Animal(void);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copy);
    ~Animal(void);

    void run(int distance);
    void call();
    void eat(std::string const &food);
    void walk(int distance);
};

class Cat : public Animal
{
public:
    Cat(void);
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);
    ~Cat(void);
};