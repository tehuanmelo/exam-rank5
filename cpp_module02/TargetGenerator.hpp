# pragma once

# include <iostream>
# include <string>
# include <map>
# include "ATarget.hpp"

class ATarget;

class TargetGenerator {
private:
    std::map<std::string, ATarget*> _targets;
    TargetGenerator(const TargetGenerator& copy);
    TargetGenerator& operator=(const TargetGenerator& copy);
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget* target);
    void forgetTargetType(const std::string& targetType);
    ATarget* createTarget(const std::string& targetType);

};