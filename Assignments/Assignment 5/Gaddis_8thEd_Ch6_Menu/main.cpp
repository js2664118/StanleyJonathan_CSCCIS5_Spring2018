/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Menu for all ten Chapter 4 problems
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float calcRtl(float,float);
double gtLen();
double gtWid();
double gtArea(int,int);
void display(int,int,int);
double gtSles(string);
void fdHghst(string,string,string,string,double,double,double,double);
double gtAccdt(string);
void fdLowst(string,string,string,string,string,double,double,double,double,double);
float falDist(int);
float findV (float,float);
float celsius(int);
void coinTos();
float prstVal(double,float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int mchoice;         //Variable to hold users choice
    char cont;           //Variable to ask the user if they want to continue
    
    //Input or initialize values Here
    do{
    cout<<"Which problem would you like to see?"<<endl;
    cout<<"Enter 1 for Markup"<<endl;
    cout<<"Enter 2 for Rectangle Area"<<endl;
    cout<<"Enter 3 for Winning Division"<<endl;
    cout<<"Enter 4 for Safest Driving"<<endl;
    cout<<"Enter 5 for Falling Distance"<<endl;
    cout<<"Enter 6 for Kinetic Energy"<<endl;
    cout<<"Enter 7 for Celsius Table"<<endl;
    cout<<"Enter 8 for Coin Toss"<<endl;
    cout<<"Enter 9 for Present Value"<<endl;
    cin>>mchoice;
    
    //Process/Calculations Here
    switch (mchoice){
        case 1:{
            //Declare all Variables Here
            float whlesl;   //Wholesale cost of the item
            float perc;     //Markup percentage
            float rtlprc;   //Retail price of the item
    
            //Input or initialize values Here
            do{
                if( whlesl<0||perc<0){
                    cout<<"Please enter a non-negative value"<<endl;
                }
                cout<<"Enter the wholesale cost of the item and the markup percentage ";
                cin>>whlesl>>perc;
            }while (whlesl<0||perc<0);
            rtlprc=calcRtl(whlesl,perc);
            cout<<"The retail price is "<<rtlprc<<endl;
            //Process/Calculations Here
    
            //Exit
            
        }break;
        case 2:{
            //Declare all Variables Here
            int length,width,area;   //Length and width of the rectangle
    
            //Input or initialize values Here
            length=gtLen();
            width=gtWid();
            area=gtArea(length,width);
            display(length,width,area);
            //Process/Calculations Here
    
            //Exit
            
        }break;
        case 3:{
            //Declare all Variables Here
            string div1,div2,div3,div4; //Name of the division
            unsigned int sales1,sales2,sales3,sales4; //Sales figures
    
            //Input or initialize values Here
            cout<<"Enter the name of the division ";
            cin>>div1;
            sales1=gtSles(div1);
            cout<<"Enter the name of the division ";
            cin>>div2;
            sales2=gtSles(div2);
            cout<<"Enter the name of the division ";
            cin>>div3;
            sales3=gtSles(div3);
            cout<<"Enter the name of the division ";
            cin>>div4;
            sales4=gtSles(div4);
    
            //Process/Calculations Here
            fdHghst(div1,div2,div3,div4,sales1,sales2,sales3,sales4);
            //Exit
            
        }break;
        case 4:{
            //Declare all Variables Here
            string area1,area2,area3,area4,area5; //Name of the division
            unsigned int mis1,mis2,mis3,mis4,mis5; //Sales figures
    
            //Input or initialize values Here
            cout<<"Enter the name of the region ";
            cin>>area1;
            mis1=gtAccdt(area1);
            cout<<"Enter the name of the region ";
            cin>>area2;
            mis2=gtAccdt(area2);
            cout<<"Enter the name of the region ";
            cin>>area3;
            mis3=gtAccdt(area3);
            cout<<"Enter the name of the region ";
            cin>>area4;
            mis4=gtAccdt(area4);
            cout<<"Enter the name of the region ";
            cin>>area5;
            mis5=gtAccdt(area5);
    
            //Process/Calculations Here
            fdLowst (area1,area2,area3,area4,area5,mis1,mis2,mis3,mis4,mis5);
    
            //Exit
            
        }break;
        case 5:{
            //Declare all Variables Here
            int MAX=10; //Max number for the loop counter
            float dist; //Distance the object traveled
    
            //Input or initialize values Here
    
            //Process/Calculations Here
            for (int count=1;count<=MAX;count++){
                dist=falDist(count);
                cout<<"The distance fallen after "<<count<<" seconds is "<<dist<<" meters"<<endl;
            }
            //Exit
            
        }break;
        case 6:{
            //Declare all Variables Here
            float mass,veloc; //Values for mass and velocity
            float energy;   //Kinetic energy of object
    
            //Input or initialize values Here
            cout<<"What is the mass of the object in kg ";
            cin>>mass;
            cout<<"How fast is the object going in meters/second ";
            cin>>veloc;
            energy=findV(mass,veloc);
            //Process/Calculations Here
            cout<<"The Kinetic Energy of the object is "<<energy<<" m/s^2"<<endl;
    
            //Exit
            
        }break;
        case 7:{
            //Declare all Variables Here
            float temp;   //Value of the Fahrenheit temperature in Celsius
            //Input or initialize values Here
            cout<<setprecision(1)<<fixed<<showpoint<<endl;
            //Process/Calculations Here
            for (int count=1;count<=20;count++){
                temp=celsius(count);
                cout<<count<<" degrees Fahrenheit is "<<temp<<" degrees Celsius"<<endl;
            }
    
            //Exit
            
        }break;
        case 8:{
            //Declare all Variables Here
            srand(static_cast<unsigned int>(time(0)));
            int toss;       //number of tosses the user picks
    
            //Input or initialize values Here
            cout<<"How many times would you like to flip the coin? ";
            cin>>toss;
            //Process/Calculations Here
            for (int count=1;count<=toss;count++){
                coinTos();
            }
            
        }break;
        case 9:{
            //Declare all Variables Here
            double F;  //Value of the future amount
            float r;    //Value of the interest rate
            int n;      //Number of years 
            char choice;    //User choice to run again 
            float prsnt;    //Present value
            do{
                //Input or initialize values Here
                cout<<"Enter the future amount ";
                cin>>F;
                cout<<"Enter the interest rate ";
                cin>>r;
                cout<<"Enter the number of years ";
                cin>>n;
    
                //Process/Calculations Here
                prsnt=prstVal(F,r,n);
                cout<<"The present value needed to attain the future amount is $"<<prsnt<<endl;
                cout<<"Would you like to try some different numbers? (y or n)";
                cin>>choice;
            }while (choice=='y');
        }break;
    }
    cout<<"Would you like to see another problem? (y or n)"<<endl;
    cin>>cont;
    }while (cont=='y');
    
    //Exit
    return 0;
}

float calcRtl(float num1,float num2){
    float mrkup;
    mrkup=num1*(1+(num2/100));
    return mrkup;
}

double gtLen(){
    int length;
    cout<<"Enter the length of the rectangle ";
    cin>>length;
    return length;
}

double gtWid(){
    int width;
    cout<<"Enter the width of the rectangle ";
    cin>>width;
    return width;
}

double gtArea(int num1,int num2){
    int area;
    area=num1*num2;
    return area;
}

void display(int num1,int num2,int num3){
    cout<<"The length of the rectangle is "<<num1<<endl;
    cout<<"The width of the rectangle is "<<num2<<endl;
    cout<<"The area of the rectangle is "<<num3<<endl;
}

double gtSles(string name){
    double num;
    do{
        if (num<0){
            cout<<"Please enter a number greater than 0, ";
        }
        cout<<"Enter the sales figures for this division ";
        cin>>num;
    }while(num<0);
    return num;
}

void fdHghst(string name1,string name2,string name3,string name4,double num1,double num2,double num3,double num4){
    if (num1>num2&&num1>num3&&num1>num4){
        cout<<"The "<<name1<<" has the highest sales figures with $"
                <<num1<<" in sales"<<endl;
    }
    else if (num2>num1&&num2>num3&&num2>num4){
        cout<<"The "<<name2<<" has the highest sales figures with $"
                <<num2<<" in sales"<<endl;
    }
    else if (num3>num1&&num3>num2&&num3>num4){
        cout<<"The "<<name3<<" has the highest sales figures with $"
                <<num3<<" in sales"<<endl;
    }
    else if (num4>num1&&num4>num2&&num4>num3){
        cout<<"The "<<name4<<" has the highest sales figures with $"
                <<num4<<" in sales"<<endl;
    }
}

double gtAccdt(string name){
    double num;
    do{
        if (num<0){
            cout<<"Please enter a number greater than 0, ";
        }
        cout<<"Enter the number of accidents in this area ";
        cin>>num;
    }while(num<0);
    return num;
}

void fdLowst (string name1,string name2,string name3,string name4,string name5,double num1,double num2,double num3,double num4,double num5){
    if (num1<num2&&num1<num3&&num1<num4&&num1<num5){
        cout<<"The "<<name1<<" region has the lowest accidents in the city with only "
                <<num1<<" accident(s)"<<endl;
    }
    else if (num2<num1&&num2<num3&&num2<num4&&num2<num5){
        cout<<"The "<<name2<<" region has the lowest accidents in the city with only "
                <<num2<<" accident(s)"<<endl;
    }
    else if (num3<num1&&num3<num2&&num3<num4&&num3<num5){
        cout<<"The "<<name3<<" region has the lowest accidents in the city with only "
                <<num3<<" accident(s)"<<endl;
    }
    else if (num4<num1&&num4<num2&&num4<num3&&num4<num5){
        cout<<"The "<<name4<<" region has the lowest accidents in the city with only "
                <<num4<<" accident(s)"<<endl;
    }
    else if (num5<num1&&num5<num2&&num5<num3&&num5<num4){
        cout<<"The "<<name5<<" region has the lowest accidents in the city with only "
                <<num5<<" accident(s)"<<endl;
    }
}

float falDist (int num){
    float d;
    float g=9.8;
    d=(0.5*g)*pow(num,2);
    return d;
}

float findV(float m,float v){
    float KE;   //Kinetic energy of object
    KE=(0.5*m)*pow(v,2);
    return KE;
}

float celsius(int Fheit){
    float cels;
    cels=(5.0f/9.0f)*(Fheit-32);
    return cels;
}

void coinTos(){
    int coin;
    coin=rand()%(2+1);
    if (coin==1)cout<<"The coin is Heads!"<<endl;
    else cout<<"The coin is tails!"<<endl;
}

float prstVal(double num1,float num2, int num3){
    float P;
    P=num1/pow((1+(num2/100)),num3);
    return P;
}