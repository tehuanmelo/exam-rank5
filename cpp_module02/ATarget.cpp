
# include "ATarget.hpp"

ATarget::ATarget() : _type("") {}

ATarget::ATarget(const std::string& type) : _type(type) {}

ATarget::ATarget(const ATarget& copy) { *this = copy; }

ATarget& ATarget::operator=(const ATarget& copy) {
    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

ATarget::~ATarget() {}

const std::string& ATarget::getType() const { return this->_type; }

void ATarget::getHitBySpell(const ASpell& aspell) const {
    std::cout << this->getType() << " has been " << aspell.getEffects() << "!" << std::endl;
}

