#include<iostream>
#include<string>
using namespace std;

int main()
{string ans,land;
int a,b;
    bool again;
   while(again)
{
    bool error;
    while(error)
{


cout<<"Which land's measure size you want to calculate?\n★Square\n★Rectangle\n★Triangle\n★parallelogram\n";
cin>>land;
         if(land=="trangle"||land=="rectangle"||land=="square"||land=="parallelogram") error=false;
    else {cout<<"An ERROR occured! Please input the correct spelling in small letters\n";
            error=true;}
}
if(land=="square"){
cout<<"Enter a hand's size of square:";
cin>>a;
int sum;
sum=a*a;
cout<<"Square's land size is:__"<<sum<<"__square(feet/c.m/meter etc)";
}
    else if(land=="rectangle")
    {
    cout<<"Enter rectangle's length:";
        cin>>a;
cout<<"Now enter width:";
        cin>>b;
cout<<"Rectangle's land measure is:__"<<a*b<<"__square(feet, c.m, meter etc)";
}
    else if(land=="triangle")
    {
    cout<<"Enter triangle's height:";
        cin>>a;
cout<<"Now enter land:";
        cin>>b;
cout<<"triangle's land measure is:__"<<(a*b)/2<<"__square(feet, c.m, meter etc)";
        }
    else if(land=="parallelogram")
    {
    cout<<"Enter parallelogram's height:";
        cin>>a;
cout<<"Now enter land:";
        cin>>b;
cout<<"Rectangle's land measure is:__"<<a*b<<"__square(feet, c.m, meter etc)";
        }


    cout<<"Do you want to do it again?\n Type:\n ★Yes \n ★No";
    cin>>ans;
    if(ans=="yes"||ans=="YES"||ans=="Yes")again=true;
      else if(ans=="no"||ans=="NO"||ans=="No")
        {
        cout<<"Thank you for using my software";
        again=false;
        }

        }
    }
