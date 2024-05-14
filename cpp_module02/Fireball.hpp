# pragma once

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fireball : public ASpell {
private:
public:
    Fireball();
    Fireball(const Fireball& copy);
    Fireball& operator=(const Fireball& copy);
    ~Fireball();
    ASpell* clone() const;
};