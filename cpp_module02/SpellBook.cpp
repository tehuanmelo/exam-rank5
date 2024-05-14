# include "SpellBook.hpp"


SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

SpellBook::SpellBook(const SpellBook& copy) { *this = copy; }

SpellBook& SpellBook::operator=(const SpellBook& copy) {
    if (this != &copy) {
        this->spells = copy.spells;
    }
    return *this;
}

void SpellBook::learnSpell(ASpell* spell) {
    std::map<std::string, ASpell*>::iterator it = this->spells.find(spell->getName());
    if (it != this->spells.end())
        return;
    this->spells[spell->getName()] = spell;
}

void SpellBook::forgetSpell(const std::string& spellName) {
    std::map<std::string, ASpell*>::iterator it = this->spells.find(spellName);
    if (it == this->spells.end())
        return;
    this->spells.erase(it);
}

ASpell* SpellBook::createSpell(const std::string& spellName) {
    ASpell* spell = NULL;
    std::map<std::string, ASpell*>::iterator it = this->spells.find(spellName);
    if (it != this->spells.end())
        spell = this->spells[spellName];  
    return spell;
}