// Mohammad Islam
#pragma once
#include <iostream>
#include <vector>
#include "profemon.hpp"

class Trainer {
    protected:
        Profemon Pname;
        std::vector<Profemon> Profedex;
        Profemon team[3];
        Profemon* selected;
    public:
        Trainer();
        Trainer(std::vector <Profemon> profemons);
        Profemon gets();
        bool contains(std::string name);
        bool addProfemon(Profemon profemon);
        bool removeProfemon(std::string name);
        void setTeamMember(int slot, std::string name);
        bool chooseProfemon(int slot);
        Profemon getCurrent();
        void printProfedex();
        void printTeam();
};