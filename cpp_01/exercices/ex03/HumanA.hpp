#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);

    private:
        std::string _name;
        Weapon &_weapon;
};

#endif
