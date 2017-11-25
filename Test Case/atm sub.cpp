#include<iostream>
using namespace std;
int main()
{   int x;
    float y,c;
    cin>>x>>y;

    if(x%5==0 && (y-x)>=0.50)
    c=y-x-0.50;

    else
    c=y;

    cout<<c;
return 0;
}
