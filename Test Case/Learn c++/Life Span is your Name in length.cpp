#include<iostream>
using namespace std;
int main()
{
    string name;
    double a;
    cout << "Full name please : \n";
    getline(cin,name);
    cout << "Enter age: \n";
    cin >> a;
    double lifespan = a/name.length();
    cout << "You've lived " << lifespan << " years for each letter in your name";
}
