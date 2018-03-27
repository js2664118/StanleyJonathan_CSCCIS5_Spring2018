/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int speed;      //Variable to hold how fast the user is going
    int hours;      //Variable to hold how many hours traveled
    int dist;       //Distance traveled
    
    //Input or initialize values Here
    
    cout<<"What was the speed of the vehicle in MPH"<<endl;
    cin>>speed;
    cout<<"How long was the vehicle traveling in miles"<<endl;
    cin>>hours;
    
    for (int count=1;count<=hours;count++){
        dist=speed*count;
        cout<<"Distance Traveled "<<dist<<" miles over "<<count<<" hour(s)"<<endl;
    }
    
    //Process/Calculations Here
    
    //Exit
    return 0;
}

