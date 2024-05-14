# pragma once

# include <iostream>
# include <string>
# include "ATarget.hpp"

class Dummy : public ATarget {
private:
public:
    Dummy();
    ~Dummy();
    Dummy(const Dummy& copy);
    Dummy& operator=(const Dummy& copy);

    ATarget* clone() const;
};