#include <iostream>
#include<iomanip>
using namespace std;

int main() {
int x;
float y,calc;
float charge = 0.50;
cin >> x;
cin >> y;
if(x > 0 && x<=2000&& y >= 0 && y<=2000 && (y>=x+charge)){
if (x % 5 == 0) {
  if (y > x) {
    calc = (y - x)-charge;
    cout<<fixed<<setprecision(2)<<calc;
  }else{
     cout<<fixed<<setprecision(2)<<y;
  }
}else{
    cout<<fixed<<setprecision(2)<<y;
}

  return 0;}
}
