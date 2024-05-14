
# include "./Warlock.hpp"

Warlock::Warlock() : _name(""), _title("") {}

Warlock::Warlock(const std::string& name, const std::string& title) {
    this->_name = name;
    this->_title = title;
    std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& copy) { *this = copy; }

Warlock& Warlock::operator=(const Warlock& copy) {
    if (this != &copy) {
        this->_name = copy._name;
        this->_title = copy._title;
    }
    return *this;   
}

Warlock::~Warlock() {
    std::cout << this->getName() << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const { return this->_name; }

const std::string& Warlock::getTitle() const { return this->_title; }

void Warlock::setTitle(const std::string& title) { this->_title = title; }

void Warlock::introduce() const {
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
    this->_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName) {
    this->_spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, const ATarget& target) {
    ASpell* spell = this->_spellBook.createSpell(spellName);
    if (spell)
        target.getHitBySpell(*spell);
}