
# include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(const Polymorph& copy) { *this = copy; }

Polymorph& Polymorph::operator=(const Polymorph& copy) {
    if (this != &copy) {
        this->_name = copy._name;
        this->_effects = copy._effects;
    }
    return *this;
}
Polymorph::~Polymorph() {}

ASpell* Polymorph::clone() const { return new Polymorph(*this); }