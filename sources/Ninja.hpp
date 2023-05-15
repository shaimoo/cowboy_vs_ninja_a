#ifndef NINJA
#define NINJA

#include "Character.hpp"
using namespace std;

namespace ariel{
    class Ninja:public Character
    {
    private:
        int speed;

    public:
         Ninja(string name,int point_of_life, Point location , int speed);
         ~Ninja() override;

         virtual void move(const Character &enemy);
         virtual void slash(const Character &enemy);
         int get_speed();
    };
    class YoungNinja:public Ninja
    {
    public:
        YoungNinja(string name, Point location);
    };

    class TrainedNinja:public Ninja
    {
    public:
        TrainedNinja(string name, Point location);
    };
    class OldNinja :public Ninja
    {
    public:
        OldNinja(string name, Point location);
    };

}
#endif
