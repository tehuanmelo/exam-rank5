
# include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& copy) { *this = copy; }

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& copy) {
    if (this != &copy) {
        this->_targets = copy._targets;
    }
    return *this;
}

void TargetGenerator::learnTargetType(ATarget* target) {
    std::map<std::string, ATarget*>::iterator it = this->_targets.find(target->getType());
    if (it != this->_targets.end())
        return;
    this->_targets[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(const std::string& targetType) {
    std::map<std::string, ATarget*>::iterator it = this->_targets.find(targetType);
    if (it == this->_targets.end())
        return;
    this->_targets.erase(it);
}

ATarget* TargetGenerator::createTarget(const std::string& targetType) {
    ATarget* target = NULL;
    std::map<std::string, ATarget*>::iterator it = this->_targets.find(targetType);
    if (it != this->_targets.end())
        target = this->_targets[targetType];
    return target;
}