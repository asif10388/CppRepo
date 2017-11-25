#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Latter grade finder \n";
    cin >> a;
    if(a >= 101){
        cout << "YOU FOOL YOU CANT GET MOORE THEN 100 \n";
    }
    else if(a >= 80 && a<101){
        cout << "You got 'A+' \n";
    }
    else if(a >= 70 && a<80){
        cout << "You got 'A' \n";
    }
    else if(a >=60 && a<70){
        cout << "you got 'A-' \n";
        }
    else if(a >=50 && a <60){
        cout << "You got 'B' \n";
     }
    else if(a >= 40 && a <50){
        cout << "You got 'C' \n";
    }
    else if(a >= 32 && a <40){
        cout << "You got 'D' \n";
    }
    else if(a<32){
        cout << "You got 'F' \n";
    }
    return 0;
}
