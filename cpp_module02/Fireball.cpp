
# include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(const Fireball& copy) { *this = copy; }

Fireball& Fireball::operator=(const Fireball& copy) {
    if (this != &copy) {
        this->_name = copy._name;
        this->_effects = copy._effects;
    }
    return *this;
}
Fireball::~Fireball() {}

ASpell* Fireball::clone() const { return new Fireball(*this); }