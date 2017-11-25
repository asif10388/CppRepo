#include <iostream>
#include <string>
using namespace std;

struct Items
{
    enum ItemType
    {
    ITEMTYPE_SWORD,
    ITEMTYPE_TORCH,
    ITEMTYPE_POTION
};

};


    string getItemName(Items::ItemType itemType)
{
    if (itemType == Items::ITEMTYPE_SWORD)
        return string("Sword");
    if (itemType == Items::ITEMTYPE_TORCH)
        return string("Torch");
    if (itemType == Items::ITEMTYPE_POTION)
        return string("Potion");

    // Just in case we add a new item in the future and forget to update this function
    return string("???");
}

int main()
{
    // ItemType is the enumerated type we've declared above.
    // itemType (lower case i) is the name of the variable we're defining (of type ItemType).
    // ITEMTYPE_TORCH is the enumerated value we're initializing variable itemType with.
    Items::ItemType itemType = Items::ITEMTYPE_SWORD;

    cout << "You are carrying a " << getItemName(itemType) << "\n";

    return 0;
}
