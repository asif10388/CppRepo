#include <iostream>
#include <string>
using namespace std;

int main()
//start back option
{bool back;
        int ba;
        while(back)
{
    int opt;
    cout<<"Choose an option \n 1. Helpline \n 2. Calculator \n 3. Mark Grade \n 4.Multiplication Table \n 5. Temperature Converter \n 6. Drawing"<<endl;
    cin>>opt;
    if(opt == 1)
    {
        //option 1
    cout<<"Which type of helpline do tou want? \n 1.  Ambulance \n 2.  Police \n 3.  Fire Service \n***ONLY DHAKA IS AVAILABLE***"<<endl;
    int h;
        cin>>h;
       if(h == 1){cout << "Ambulance Number: \n__________________________________________\n Day-Night Ambulance Service:  9132073    |\n Dhaka Medical College Hospital:  8626812 | \n Shahid Suhrawardi Hospital:     9130800  |\n------------------------------------------|"<<endl; }

        if (h == 2) {cout<< " Police Number: \n_____________________\n Adabor: 9133265     |\n Airport:   8951281  |\n Dhanmondi : 8631941 |\n Lalbag: 7316300     |\n Mirpur: 9001001     |\n Motijheel: 9571000  |\n New Market: 8631942 |\n_____________________|"<<endl; }

             if (h == 3) { cout << "Fire Service:\n____________________________ \n| Fire Brigade Enquiry: 199|\n| Head Quarter: 9556667    | \n ---------------------------"<<endl; }
            }
                //option2
    if (opt == 2)
        {
             float a, b;
    string o;
    cout<<"Welcome to my calculation Software! \n Please enter first number: ";
cin>>a;
cout<< " Now enter operator  ( + , - , × , ÷ ) :";
cin>>o;
cout<<" Enter another number:";
cin>>b;
   cout<<" Result is = ";
       if(o=="+"){ cout<<a+b<< endl; }
       else  if(o=="-") { cout<<a-b<<endl; }
       else if (o=="×"){ cout<< a*b<<endl; }
       else if (o=="÷") { cout<< a/b<<endl; }
        }
    if(opt == 3)
    //option 3
    {
    cout<<"Enter your exam's full mark first\n";
int mark;
cin>>mark;
cout<<"Now enter your gained mark : \n";
int got;
cin>>got;
int m;
m=(got*100)/mark;

    if(m<33){cout<<"Your grade is F!\n You failed!\n";}
    if(m<40&&m>32){cout<<"your grade is D!\n Very Bad\n!";}
    if(m<50&&m>39){cout<<"your grade is C!\n Not good\n";}
    if(m<60&&m>49){cout<<"your grade is B!\n Study harder\n!";}
    if(m<70&&m>59){cout<<"your grade is A-!\n Result is good!\n";}
    if(m<80&&m>69){cout<<"Your grade is A!\n Well done\n!";}
    if(m<=100&&m>79){cout<<"your grade is A+!\n Awesome Result!\n";}
   if(m>100){cout<<"stop joking😒\n";}

/*option 3 ends*/}

    //option 4
    if (opt == 4){
        cout<<"Enter integer"<<endl;
    float n;
    cin>>n;
    cout<<n<<"'s Multiplication table is:\n";
    cout<<"______________"<<endl;
    for (float i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i <<"   |"<< endl;
    }
            cout<<"_______________"<<endl;
        /*option 4 ends*/}
    //option 5
    if(opt==5)
    {
    cout<<"Which format do you want?\n1.F° to C°\n2.C° to F°\nchoose an option(1/2)\n";
    int fmt;
    cin>>fmt;
    if(fmt==1){cout<<"Now enter temperature in F.\n(no need to input °. Just input the number)\n";
    float F;
    cin>>F;
    float sum;
    sum=(5*F-160)/9;
cout<<F<<" Degree Farenhite ="<<sum<<"°C"<<endl;
}
if(fmt==2){cout<<"Now enter temperature in C.\n(no need to input °. Just input the number)\n";
    float C;
    cin>>C;
    float x;
    x=(9*C+160)/5;
cout<<C<<"Degree C ="<<x<<"°F"<<endl;
}
    if(fmt>=3){cout<<"Error!\nPlease choice a point by giving input 1/2";}
/*Option 5 ends*/}
        //option 6
        if (opt == 6)
        {
        cout <<" what do you want to draw?\n 1. Quad \n 2. Birthday cake (you can't draw, just see)"<<endl;
            int d;
        cin>> d;
        if ( d == 1)
            {
int l,w;
cout<<"Input your quad's height:";
cin>>l;
cout<<"Input your quad's width:";
cin>>w;
cout<<endl;
for (int x=0; x<l; x++)
{
for (int x=0; x<w; x++)
{
cout<<" *";
}
cout<<"\n";}
if(l==w){cout<<"\n This quad is a SQUARE";}
else { cout<<"\n This quad is a RECTANGLE";}
        }
            if ( d == 2)
            {
        cout<<"DRAWING BIRTHDAY CAKE USING C++\n"<<endl;
cout<<"     *        *        *\n    ***      ***      ***"<<endl;
    for (int x=0; x<3; x++)
    {
    cout<<"    |-|      |-|      |-|"<<endl;
}
    cout<<"____|-|______|-|______|-|___"<<endl;
    cout<<"|==========================|"<<endl;
    for(int x=0; x<2; x++)
{
        cout<<"|      HAPPY BIRTHDAY      |\n|~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
}
cout<<"|__________________________|\n";
    }

    }
   cout<<"Press 0 to back \n And enter 1 to stop the programme"<<endl;
cin>>ba;
    if(ba==0)back=true;
    else break;
    }
return 0;    }
