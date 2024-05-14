# pragma once

# include <iostream>
# include <string>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"
# include <map>

class SpellBook;

class Warlock {
private:
    std::string _name;
    std::string _title;
    SpellBook _spellBook;

    Warlock();
    Warlock(const Warlock& copy);
    Warlock& operator=(const Warlock& copy);
public:
    Warlock(const std::string& name,const std::string& title);
    ~Warlock();

    const std::string& getName() const;
    const std::string& getTitle() const;

    void setTitle(const std::string& title);

    void introduce() const;

    void learnSpell(ASpell* spell);
    void forgetSpell(std::string spellName);
    void launchSpell(std::string spellName, const ATarget& target);
};




