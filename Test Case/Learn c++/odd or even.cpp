#include <iostream>
using namespace std;

bool isEven(int a);

int main(){
    int a;
   cout << "Enter integer :";
   cin >> a;
   if(isEven(a)){
    cout << "Even";
   }else cout << "Odd";
}
bool isEven(int a)
{

  return (a%2 == 0);
}
