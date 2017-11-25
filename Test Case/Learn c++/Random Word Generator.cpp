#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

    string randomize()
{
    srand(time(0));
    string choices[] = {"Broccoli", "Tomato", "Kiwi", "Kale", "Tomatillo"};
    string random;
    for(int i = 0; i < 3; i++)
    {
        random = choices[rand() % 5];
    }
    return random;
}

int main()
{
    srand(time(0));


    randomize();
    cout << randomize() << endl;

}

