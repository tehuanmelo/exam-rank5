# pragma once

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Polymorph : public ASpell {
private:
public:
    Polymorph();
    Polymorph(const Polymorph& copy);
    Polymorph& operator=(const Polymorph& copy);
    ~Polymorph();
    ASpell* clone() const;
};