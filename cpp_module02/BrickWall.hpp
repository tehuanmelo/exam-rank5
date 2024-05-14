# pragma once

# include <iostream>
# include <string>
# include "ATarget.hpp"

class BrickWall : public ATarget {
private:
public:
    BrickWall();
    ~BrickWall();
    BrickWall(const BrickWall& copy);
    BrickWall& operator=(const BrickWall& copy);

    ATarget* clone() const;
};