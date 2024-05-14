# pragma once

# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"

class ASpell;

class SpellBook {
private:
    std::map<std::string, ASpell*> spells;
    SpellBook(const SpellBook& copy);
    SpellBook& operator=(const SpellBook& copy);
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spellName);
    ASpell* createSpell(const std::string& spellName);
};