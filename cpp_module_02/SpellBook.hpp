#pragma once

#include "ASpell.hpp"
#include <vector>

class SpellBook
{
private:
    std::vector<ASpell *> arr_spell;

    SpellBook(SpellBook const &other);
    SpellBook &operator=(SpellBook const &other);
    
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell *aspell);
    void forgetSpell(std::string const &name);
    ASpell* createSpell(std::string const &name);

};