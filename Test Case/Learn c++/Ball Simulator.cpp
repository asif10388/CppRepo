#include <iostream>
using namespace std;

int main()
{    double distance,time = 0,distance_fallen,gravity = 9.8;
     bool stop = false;
     cout << "Enter initial height of tower: \n";
     cin >> distance;
     do{
        distance_fallen = distance - (gravity*time*time)/2;
        if(distance_fallen > 0){
                cout << "At " << time << " seconds,the ball is at " << distance_fallen << " meters\n";
                time++;
                stop = true;
        } else{
             cout << "At " << time << " seconds,the ball is at on the ground.\n";
            break;}
     }while(stop);
}
