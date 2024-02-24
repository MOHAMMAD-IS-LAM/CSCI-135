// Mohammad Islam
#include <iostream>
#include <vector>
#include <string>
#include "trainer.hpp"

Trainer::Trainer() {
    selected = nullptr;
}

Trainer::Trainer(std::vector <Profemon> profemons) {
    for (int i = 0; i < profemons.size(); i++) {
        if (team[i].getName() == "Undefined" and i < 3) {
            team[i] = profemons[i];
        }
        else {
            Profedex.push_back(profemons[i]);
        }
    }
    selected = &team[0];
}

Profemon Trainer::gets() {
    return *selected;
}

bool Trainer::contains(std::string name) {
    for (int i = 0; i < 3; i++) {
        if (team[i].getName() == name) {
            return true;
        }
    }
    for (int j = 0; j < Profedex.size(); j++) {
        if (Profedex[j].getName() == name) {
            return true;
        }
    }
    return false;
}

bool Trainer::addProfemon(Profemon profemon) {
    for (int i = 0; i < Profedex.size(); i++) {
        if (team[i].getName() == profemon.getName() or Profedex[i].getName() == profemon.getName()) {
            return false;
        }

        if (team[i].getName() == "Undefined") {
            team[i] = profemon;
        }
        else {
            Profedex.push_back(profemon);
            return true;
        }
    }
    return false;
}

bool Trainer::removeProfemon(std::string name) {
    int holder;
    for (int i = 0; i < Profedex.size(); i++) {
        if (team[i].getName() == "Undefined" or Profedex[i].getName() == "Undefined") {
            return false;
        }

        if (team[i].getName() == name) {
            team[i] = Profemon();
            return true;
        }

        if (Profedex[i].getName() == name) {
            Profedex.erase(Profedex.begin()+(i-1));
            return true;
        }
    }
    return false;
}

void Trainer::setTeamMember(int slot, std::string name) {
    int place;
    Profemon replace;
    if (slot < 3 and slot >= 0) {
        for (int i = 0; i < Profedex.size(); i++) {
            if (Profedex[i].getName() == name) {
                place = i;
                if (team[slot].getName() == "Undefined") {
                    team[slot] = Profedex[i];
                    Profedex.erase(Profedex.begin()+(place-1));
                }
                else {
                    Profedex[i] = replace;
                    Profedex[i] = team[slot];
                    team[slot] = replace;
                }
            }
        }
    }
}

bool Trainer::chooseProfemon(int slot) {
    if (team[slot].getName() != "Undefined") {
        selected = &team[slot];
        return true;
    }
    return false;
}

Profemon Trainer::getCurrent() {
    return *selected;
}

void Trainer::printTeam() {
    
}