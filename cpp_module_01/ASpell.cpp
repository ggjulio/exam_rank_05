#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::ASpell(ASpell const &other) {
    if (&other != this)
        *this = other;
}

ASpell &ASpell::operator=(ASpell const &other)
{
    this->name = other.name;
    this->effects = other.effects;
    return *this;
}

ASpell::~ASpell() {}

std::string const &ASpell::getName() const { return name;}
std::string const &ASpell::getEffects() const { return effects;}

void ASpell::launch(ATarget const &atarget) const
{
    atarget.getHitBySpell(*this);
}
