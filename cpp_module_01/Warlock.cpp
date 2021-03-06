#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
  : name(name), title(title)
{
  std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
  std::cout << name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
  return name;
}

const std::string& Warlock::getTitle() const
{
  return title;
}

void Warlock::setTitle(const std::string& title)
{
  this->title = title;
}

void Warlock::introduce() const
{
  std::cout << name << ": I am " << name << ", " << title <<"!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell && spells.count(spell->getName()) == 0)
		spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string const &spellName) {
	std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
	if (it == spells.end())
		return;
	delete it->second;
	spells.erase(it);
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target) {
	std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
	if (it != spells.end())
		it->second->launch(target);
}