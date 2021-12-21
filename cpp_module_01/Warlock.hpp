#pragma once

#include <iostream>
#include "ASpell.hpp"

class Warlock
{
private:
  std::string name;
  std::string title;

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

  void learnSpell(ASpell*);
  void forgetSpell(string const &);
  ASpell* createSpell(string const &);

};
