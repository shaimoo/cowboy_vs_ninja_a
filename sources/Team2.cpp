#include "Team2.hpp"

#include "iostream"
using namespace std;

namespace ariel{

    Team::Team2(Character* lead):lead(lead)
    {
        this->add(lead);
    }
    void Team::add(Character *temp){

    }
    void Team::attack(Team *temp) {
        return;
    }
    int Team::stillAlive() {
        return 0;
    }
    void Team::print() {
        return;
    }
}