#include "Ninja.hpp"

using namespace std;

namespace ariel{
    Ninja::Ninja(string name,int point_of_life, Point location , int speed): name(name), point_of_life(point_of_life), location(location) , speed(speed){}
    Ninja::~Ninja();

    YoungNinja::YoungNinja(int name, Point location) : Ninja(name,100,location,14) {}
    TrainedNinja::TrainedNinja(int name, Point location): Ninja(name,120,location,12) {}
    OldNinja::OldNinja(int name, Point location) : Ninja(name,150,location,8) {}

    void Ninja::slash(const Character &enemy) {}
    void Ninja::move(const Character &enemy) {}
    int  Ninja::get_speed()
    {
        return speed;
    }

}
