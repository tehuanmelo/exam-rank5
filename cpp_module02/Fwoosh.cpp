
# include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(const Fwoosh& copy) { *this = copy; }

Fwoosh& Fwoosh::operator=(const Fwoosh& copy) {
    if (this != &copy) {
        this->_name = copy._name;
        this->_effects = copy._effects;
    }
    return *this;
}
Fwoosh::~Fwoosh() {}

ASpell* Fwoosh::clone() const { return new Fwoosh(*this); }