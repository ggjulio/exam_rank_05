#pragma once

#include "ASpell.hpp"
#include <map>

class 
{
private:
    std::map<std::string, ASpell*> spells;

    SpellBook(SpellBook const &other);
    SpellBook &operator=(SpellBook const &other);
    
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string const &name);
    ASpell* createSpell(std::string const &name);
};
