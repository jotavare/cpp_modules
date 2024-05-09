#include "../includes/Character.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/MateriaSource.hpp"
#include <iostream>

void printHeader(const std::string& title) {
    std::cout << "==================== " << title << " ====================" << std::endl;
}

void testIceAndCure() {
    printHeader("TEST ICE AND CURE");

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("unknown");

    delete me;
    delete src;
}

void testCharacterActions() {
    printHeader("TEST CHARACTER ACTIONS");

    ICharacter* npc = new Character("NPC");
    ICharacter* goblin = new Character("Goblin");
    AMateria* ice = new Ice();

    npc->equip(new Ice());
    npc->equip(ice);
    npc->equip(new Cure());
    npc->equip(new Ice());
    npc->equip(new Ice());
    goblin->equip(new Cure());
    goblin->equip(new Cure());
    goblin->equip(new Cure());

    npc->use(0, *goblin);
    npc->use(1, *goblin);
    npc->use(3, *goblin);
    goblin->use(2, *npc);

    npc->unequip(1);
    npc->use(1, *goblin);

    npc->equip(new Cure());
    npc->use(1, *goblin);

    delete npc;
    delete goblin;
    delete ice;
}

void testMateriaSource() {
    printHeader("TEST MATERIA SOURCE");

    IMateriaSource* materialType = new MateriaSource();
    ICharacter* npc = new Character("Lucie");
    ICharacter* goblin = new Character("Correcteur");

    materialType->learnMateria(new Ice());
    materialType->learnMateria(new Cure());
    materialType->learnMateria(new Cure());
    materialType->learnMateria(new Cure());
    materialType->learnMateria(new Cure());

    npc->equip(materialType->createMateria("ice"));
    npc->equip(materialType->createMateria("cure"));
    npc->equip(materialType->createMateria("cure"));
    npc->equip(materialType->createMateria("ice"));

    npc->use(0, *goblin);
    npc->use(2, *goblin);

    delete materialType;
    delete npc;
    delete goblin;
}

int main() {
    testIceAndCure();
    testCharacterActions();
    testMateriaSource();

    return 0;
}
