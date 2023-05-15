#ifndef TEAM
#define TEAM
#include <vector>
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"

using  namespace std;
namespace ariel{
    class Team
    {
    private:
        list<Ninja*> Ninjas;
        list<Cowboy*> Cowboys;
        Character *lead;

    public:
        Team(Character *lead);
        virtual ~Team();
        void add(Character *temp const);
        void attack(Team *temp const);
        int stillAlive();
        void print();
    };


}


#endif
