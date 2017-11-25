#include<iostream>
using namespace std;

int main()
{
    enum Races
    {
        MONSTER_ORCS,
        MONSTER_GOBLINS,
        MONSTER_TROLLS,
        MONSTER_OGRES,
        MONSTER_SKELETONS,
    };

    Races Monster = MONSTER_TROLLS;
    cout << Monster;
}
