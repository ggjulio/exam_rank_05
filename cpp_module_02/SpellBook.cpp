#include "SpellBook.hpp"

    
SpellBook::SpellBook()
{

}
SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator it = spells.begin();
	while (it != spells.end())
		delete it->second;
	spells.clear();
}

void    SpellBook::learnSpell(ASpell *spell)
{
	if (spell && spells.count(spell->getName()) == 0)
		spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}
void    SpellBook::forgetSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(name);
	if (it == spells.end())
		return;
	delete it->second;
	spells.erase(it);
}
ASpell* SpellBook::createSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(name);
	if (it != spells.end())
		return it->second;
	return 0;
}
