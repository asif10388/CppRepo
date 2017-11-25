#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;
    bool again=true;

    //the beginning//
    cout << "\t\t\t\t\t  Girledfriend Simulator \n\n\n\n";
    cout << "(press enter to continue)\n\n\n\n";
    cin.ignore();
    cout << "One day bae came and asked \n";
    cout << "What day is it ? \n\n";
    cout << "(press enter to continue)\n\n";
    cin.ignore();
    cout << "Options are\n";
    cout << "a. Bae's birthday \n";
    cout << "b. The day we meet \n";
    cout << "c. My birthday (In mind: But today isn't my birthday) \n\n";
    cout << "(press enter to continue)\n\n";

    cin.ignore();
    cout << "[Response  are 1. Happy birthday \n";
    cout << " Response  are 2. Happy anniversary \n";
    cout << " Response  are 3. Happy birthday to me] \n\n";
    cout << "(type your responses)\n\n";
//response part //

    while(again){
    getline(cin,response);
    if (response == "happy anniversary"){
        cout << "OH !! you remembered"<<endl;
        cout << "This monthly anniversary is going to be great \n\n"<<endl;
        cout << "(press enter to continue)\n\n";
        again=false;
    }
    else if (response=="happy birthday"){
        cout << "NO!! it's our monthly anniversary"<<endl;
        cout << "[your girlfriend is mad]"<<endl;
        cout << "(press enter to continue)\n\n";
        again=false;
    }
    else if (response=="happy birthday to me"){
        cout << "NO!! It's our monthly anniversary"<<endl;
        cout << "[your girlfriend is mad]"<<endl;
        cout << "(press enter to continue)\n\n";
        again=false;
    }
    else if (response != "happy anniversary" || response != "happy birthday" || response != "happy birthday to me"){
        cout << "enter valid answer or you're dead!! \n";
        cout << "(type your responses)\n\n";
        again=true;
    }
    }
    cin.ignore();
    cout << "[In mind:\n";
    cout << "Monthly anniversary?\n";
    cout << "What is that suppose to mean?]\n";

    return 0;
}
