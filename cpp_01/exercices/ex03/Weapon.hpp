#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string &getType();
        void setType(std::string newType);
};
