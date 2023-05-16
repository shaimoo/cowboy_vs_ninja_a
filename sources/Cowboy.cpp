#include "Cowboy.hpp"
#include "iostream"

namespace ariel{
    Cowboy::Cowboy(std::string name, ariel::Point loctation) : Character(name,110,loctation),bullets(6){}
    bool Cowboy::hasboolets() {
        return true;
    }
    string Cowboy::print() {
        return "";
    }
    void Cowboy::reload() {}
    void Cowboy::shoot(ariel::Character *target) {}
}