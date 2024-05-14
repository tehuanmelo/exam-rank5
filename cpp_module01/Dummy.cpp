

# include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::~Dummy() {}

Dummy::Dummy(const Dummy& copy) { *this = copy; }

Dummy& Dummy::operator=(const Dummy& copy) {
    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

ATarget* Dummy::clone() const { return new Dummy(*this); }