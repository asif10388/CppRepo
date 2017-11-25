#include<iostream>
using namespace std;

int main()
{
    int smaller,bigger;
    cout << "Enter a number: \n";
    cin >> smaller;
    cout << "Enter another number: \n";
    cin >> bigger;
    if(smaller > bigger)
    {
        int temp;
        temp = bigger;//temp is now 2
        bigger = smaller;//bigger is now 3
        smaller = temp;//bigger is now 3

        cout << "Swapping values\n";
        cout << "Smaller is " << smaller <<endl;
        cout << "Bigger is " << bigger <<endl;

    }else
    {
        cout << "Smaller is " << smaller <<endl;
        cout << "Bigger is " << bigger <<endl;
    }
}
