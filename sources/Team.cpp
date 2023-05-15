#include "Team.hpp"
#include "iostream"
using namespace std;

namespace ariel{

    Team::Team(Character* lead):lead(lead)
    {
        this.add(lead);
    }
    void Team::add(Character* Character){
        if(instanceof<Cowboy*>(Character)){
            this->cowboys.push_back((Cowboy*)Character);
        }
        if(instanceof<Ninja*>(Character)){
            this->ninjas.push_back((Ninja*)Character);
        }
    }
    void Team::attack(Team *temp) {
        return;
    }
    int Team::stillAlive() {
        return;
    }
    void Team::print() {
        return;
    }
}