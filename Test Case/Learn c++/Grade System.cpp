#include <iostream>
#include <string>
using namespace std;

int main()
{
 int num;
 string name = "";
 bool AskAgain = true;
 string Response = "";
 bool WrongWord = false;
while(AskAgain){
  cout << "enter your name:\n";
  getline(cin,name);

 cout << "enter your mark:\n";
 cin >> num;

 if(num < 25)
 {
     cout << name << ",you got a F YOU LOSER!!!\n";
 }
 else if(num>=25 && num <45)
 {
     cout <<name << ",you got an E\n";
 }
 else if(num>=45 && num<50)
 {
     cout <<name << ",you got a D\n";
 }
 else if(num>=50 && num<60)
 {
     cout <<name << ",you got a C\n";
 }
 else if(num>=60 && num<70)
 {
     cout <<name << ",you got a B\n";
 }
 else if(num>=70 && num<80)
 {
     cout <<name << ",you got an A\n";
 }
 else if(num>=80 && num<=100)
 {
     cout <<name << ",you got an A+ GOOD JOBBB!!!\n";
 }
 else if(num > 100)
 {
     cout << "Your entered value is invalid\n";
 }
 else{
    cout << "Dude can you type?";
 }
 do{
 cout << "Do you want to try again?\n";
 cin >> Response;
 if(Response == "yes"){
    AskAgain = true;
    break;
 }
 else if(Response == "no"){
    AskAgain = false;
    break;
 }
 else{
    WrongWord = true;
 }
 }while(WrongWord);
}
}
