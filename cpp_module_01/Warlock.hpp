#pragma once

#include <iostream>
#include <vector>
#include <map>
#include "ASpell.hpp"

class Warlock
{
private:
  std::string name;
  std::string title;

  // std::vector<ASpell*> spells;
  std::map<std::string, ASpell*> spells;

  Warlock();
  Warlock(const Warlock&);
  Warlock& operator=(const Warlock&);
public:
  Warlock(std::string const & name, std::string const& title);
  ~Warlock();

  const std::string& getName() const;
  const std::string& getTitle() const;

  void setTitle(const std::string& title);

  void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spellName);
	void launchSpell(std::string const &spellName, ATarget const &target);

};
