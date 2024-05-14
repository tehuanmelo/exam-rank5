# pragma once

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fwoosh : public ASpell {
private:
public:
    Fwoosh();
    Fwoosh(const Fwoosh& copy);
    Fwoosh& operator=(const Fwoosh& copy);
    ~Fwoosh();
    ASpell* clone() const;
};