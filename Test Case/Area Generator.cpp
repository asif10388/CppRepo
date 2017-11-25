#include<iostream>
using namespace std;
int main(){
    string main,response;
    double radius,length,width;
    bool again = true,repeat = true;
    while(again){
        while(repeat){
        cout << "What is it that you want to get the value of?\nType everything as it is.\nTriangle\nCircle\nSquare\nRectangle\n";
        cin >> main;
        if(main == "Triangle" || main == "Rectangle" || main == "Square" || main == "Circle") break;
    }
        if(main == "Triangle"){
            cout << "Enter base: \n";
            cin  >> length;
            cout << "Enter height: \n";
            cin  >> width;
            cout << "Area is " << (length + width)/2 << endl;
        }
        else if(main == "Rectangle"){
            cout << "Enter base: \n";
            cin  >> length;
            cout << "Enter height: \n";
            cin  >> width;
            cout << "Area is " << length + width << endl;
        }
        else if(main == "Circle"){
            cout << "Enter radius: \n";
            cin  >> radius;
            cout << "Area is " << radius*radius*3.1416 << endl;
        }
        else if(main == "Square"){
            cout << "Enter length: \n";
            cin  >> length;
            cout << "Area is " << length*length << endl;
        }
        cout << "Want to try again?(y/n)\n";
        cin >> response;
        if(response == "y")continue; else break;
    }
}
