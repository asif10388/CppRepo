#include<iostream>
using namespace std;

 struct MonsterInfo
 {
    enum Monsters
    {
        MONSTER_DRAGON,
        MONSTER_ORC,
        MONSTER_UNDEAD,
        MONSTER_GARGOYLE,
    };

    string m_Name = "";
    int    m_Health = 0;
 };

 string printRace(MonsterInfo::Monsters race)
 {
     if (race == MonsterInfo::MONSTER_DRAGON){
        return string("Dragon");
     }else if (race == MonsterInfo::MONSTER_UNDEAD){
        return string("Undead");
     }else if (race == MonsterInfo::MONSTER_GARGOYLE){
        return string("Gargoyle");
     }else if (race == MonsterInfo::MONSTER_ORC){
        return string("Orc");
     }
 }

 int main()
 {
     {
     MonsterInfo::Monsters race = MonsterInfo::MONSTER_DRAGON;
     MonsterInfo monster1;
     monster1.m_Name = "Infernalmorph";
     monster1.m_Health = 1750;
     cout << "This " << printRace(race) << " is named " << monster1.m_Name <<" and has "<< monster1.m_Health << " health left" << endl;
     }
     {
     MonsterInfo::Monsters race = MonsterInfo::MONSTER_UNDEAD;
     MonsterInfo monster1;
     monster1.m_Name = "Razormirage";
     monster1.m_Health = 2500;
     cout << "This " << printRace(race) << " is named " << monster1.m_Name <<" and has "<< monster1.m_Health << " health left" << endl;
     }
 }
