

# include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall() {}

BrickWall::BrickWall(const BrickWall& copy) { *this = copy; }

BrickWall& BrickWall::operator=(const BrickWall& copy) {
    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

ATarget* BrickWall::clone() const { return new BrickWall(*this); }