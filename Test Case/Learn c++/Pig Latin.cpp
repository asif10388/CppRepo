#include<iostream>
using namespace std;

int main()
{
    string word;
    string latin = "py";
    cout << "Enter you word: \n";
    cin  >> word;
    int wLength = word.length();
    for(int i = 0;i < wLength;i--)
    {
        word[i] = word[wLength-1];
    }
    cout << word;

}
