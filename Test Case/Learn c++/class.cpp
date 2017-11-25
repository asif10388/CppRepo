#include<iostream>
using namespace std;

class rectangle{
public:
    int height;
    int width;
    int area()
    {
      return height*width;
    }
};
int main ()
{
  rectangle obj;
  obj.height = 6;
  obj.width = 5;

  cout<<"area ="<<obj.area()<<endl;
  return 0;
}
