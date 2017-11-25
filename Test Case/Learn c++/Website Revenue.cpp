#include<iostream>
using namespace std;

struct Advertising
{
    int addsShown;
    int clickedAddsPercent;
    int averageEaringsPerClick;
};

void printAdvertising(Advertising ad)
{
    cout << "Nummber of adds shown : " << ad.addsShown << endl;
    cout << "Number of adds clicked rate : " << ad.clickedAddsPercent << endl;
    cout << "Average earnings per click : " << ad.averageEaringsPerClick << endl;

    cout << "Total earnings : " << ad.averageEaringsPerClick*ad.addsShown*ad.clickedAddsPercent/100 << endl;
}
int main()
{
    Advertising ad;

    cout << "How many adds were shown today ?\n";
    cin >> ad.addsShown;
    cout << "Average rate of adds?\n";
    cin >> ad.clickedAddsPercent;
    cout << "Average earnings per add?\n";
    cin >> ad.averageEaringsPerClick;

    printAdvertising(ad);
}
