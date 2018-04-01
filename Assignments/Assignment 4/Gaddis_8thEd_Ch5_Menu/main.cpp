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
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int choice;         //Variable to hold users choice
    int cont;           //Variable to ask the user if they want to continue
    
    //Input or initialize values Here
    do {
    cout<<"Which problem would you like to see?"<<endl;
    cout<<"Enter 1 for Sums of Numbers"<<endl;
    cout<<"Enter 2 for Ocean Levels"<<endl;
    cout<<"Enter 3 for Calories Burned"<<endl;
    cout<<"Enter 4 for Membership Fees"<<endl;
    cout<<"Enter 5 for Distance Traveled"<<endl;
    cout<<"Enter 6 for Pennies for Pay"<<endl;
    cout<<"Enter 7 for Celsius to Fahrenheit"<<endl;
    cout<<"Enter 8 for "<<endl;
    cout<<"Enter 9 for "<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    switch (choice){
        case 1:{
        //Declare all Variables Here
    int num;     //Variable to hold the number that the user enters
    int total;      //Variable to hold the total of sums
    
    //Input or initialize values Here
    cout<<"Please enter a non-negative number between 1 and 50"<<endl;
    cin>>num;
    
    while (num<1||num>50){
        cout<<"Please enter a valid number between 1 and 50"<<endl;
        cin>>num;
    }
    
    for (int count=0;count<=num;count++){
        total+=count;
    }
    
    //Process/Calculations Here
    cout<<"The sum of the number up to "<<num<<" is "<<total<<endl;
    
    //Exit
    break;
        }
        case 2:{
        //Declare all Variables Here
    float level=1.5;        //How much the ocean level is rising
    float total;            //Hold the total for what ocean levels will be
    
    //Process/Calculations Here
    for (int count=1;count<=25;count++){
        total+=level;
        cout<<"The ocean level has risen by "<<total<<" millimeters after "<<count<<" year(s)"<<endl;
    }
    
    //Exit
    break;
        }
        case 3:{
            //Declare all Variables Here
    float cal=3.6;      //Variable to hold the amount of calories burned per min.
    float calburn;      //Variable to hold the amount of calories burned
    int min=5;          //Variable to hold how many minutes have passed
    
    //Process/Calculations Here
    for (int count=1;count<=6;count++){
        calburn=cal*count;
        cout<<"You burned "<<calburn<<" after "<<min<<" minute(s)"<<endl;
        min+=5;
    }
    
    //Exit
    break;
        }
        case 4:{
            //Declare all Variables Here
    int fees=2500;  //Variable to hold the original membership fee
    float inc=1.04;   //Variable to hold the percentage difference
    float rate;       //Variable to hold difference in money
    
    //Process/Calculations Here
    for (int count=1;count<=6;count++){
        rate=fees*inc;
        cout<<"The new membership fee after "<<count<<" year(s) is "<<rate<<endl;
        inc+=0.04;
    }
    //Exit
    break;
        }
        case 5:{
            //Declare all Variables Here
    int speed;      //Variable to hold how fast the user is going
    int hours;      //Variable to hold how many hours traveled
    int dist;       //Distance traveled
    
    //Input or initialize values Here
    
    cout<<"What was the speed of the vehicle in MPH"<<endl;
    cin>>speed;
    cout<<"How many hours has the vehicle been traveling"<<endl;
    cin>>hours;
    
    for (int count=1;count<=hours;count++){
        dist=speed*count;
        cout<<"Distance Traveled "<<dist<<" miles over "<<count<<" hour(s)"<<endl;
    }
    
    //Process/Calculations Here
    
    //Exit
    break;
        }
        case 6:{
            //Declare all Variables Here
    float penny=0.01; //Value of penny
    int days;       //Number of days worked
    float total=0.01;      //Total amount of pay
    
    //Input or initialize values Here
    cout<<"Please enter the number of days worked"<<endl;
    cin>>days;
    
    //Process/Calculations Here
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    for (int count=1;count<=days;count++){
        cout<<"On day "<<count<<" you earned $"<<penny<<" with a Total= "<<total<<endl;
        penny*=2;
        total+=penny;
    }
    
    //Exit
    break;
        }
        case 7:{
        //Declare all Variables Here
    float celsius,fahr;    //to hold Celsius and Fahrenheit temperatures
    
    //Input or initialize values Here
    celsius=0;
    
    //Process/Calculations Here
    for (int count=1;count<=20;count++){
       fahr=(celsius*1.8)+32;
       cout<<"Celsius = "<<celsius<<" Fahrenheit = "<<fahr<<endl;
       celsius++;
    }
    
    //Exit
        break;
        }
        case 8:{}
        case 9:{}
    }
    cout<<"Would you like to see another problem? Enter 1 for yes and 2 for no"<<endl;
    cin>>cont;
    }while (cont!=2);
    
    //Exit
    return 0;
}

