#include <iostream>
#include "constants.h"
using namespace std;

double getInitialHeight()//gets height from user
{   cout << "enter initial height of tower: \n";
    int initialHeight;
    cin >> initialHeight;
    return initialHeight;
}

double calculateHeight(double initialHeight,int seconds)
{
     double distance_fallen = (myConstants::gravity * seconds * seconds)/2;
     double currentHeight = initialHeight - distance_fallen;
     return currentHeight;
}
void printHeight(double height,int seconds)
{
    if(height > 0.0) cout << "At "<< seconds << "seconds,the ball is at " << height << " meters\n";
    else  cout << "At "<< seconds << "seconds,the ball is on the ground\n";
}

void calculateAndPrintHeight(double initialHeight,int seconds)
{
    double height = calculateHeight(initialHeight,seconds);
    printHeight(height,seconds);
}
int main()
{
const double initialHeight = getInitialHeight();
calculateAndPrintHeight(initialHeight,0);
calculateAndPrintHeight(initialHeight,1);
calculateAndPrintHeight(initialHeight,2);
calculateAndPrintHeight(initialHeight,3);
calculateAndPrintHeight(initialHeight,4);
calculateAndPrintHeight(initialHeight,5);
}
