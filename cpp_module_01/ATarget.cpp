#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &type)
{ 
    this->type = type;
}

ATarget::ATarget(ATarget const &other)
{
    if (&other != this)
        *this = other;
}

ATarget &ATarget::operator=(ATarget const &other)
{
    this->type = other.type;
    return *this;
}

ATarget::~ATarget() {}

std::string const& ATarget::getType() const { return type; }

void ATarget::getHitBySpell(ASpell const &aspell) const
{
    std::cout << type << " has been " << aspell.getEffects() << "!\n";
}