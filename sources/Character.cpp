#include "Character.hpp"

using namespace std;

namespace ariel{

    // constructors
    Character::Character(string name, int point_life, Point location):name(name),point_life(point_life), location(location) {}
    Character::~Character() {}

    double Character::distance(const Character &temp){}

    bool Character::isAlive() {}

    void Character::hit(int attack) {}

    void Character::set_location(const Point &temp)
    {
        this->location = temp;
    }

    void Character::set_name(int name)
    {
        this->name = name;
    }

    void Character::set_point_life(int point_life)
    {
        this->point_life = point_life;
    }

    string Character::get_name()
    {
        return name;
    }

    int Character::get_point_life()
    {
        return point_life;
    }

    Point Character::get_location()
    {
        return location;
    }

}
