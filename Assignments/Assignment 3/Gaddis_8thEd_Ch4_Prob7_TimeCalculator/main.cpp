/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Calculate how many minutes, hours, and days there are with the given
 *          amount of seconds by the user
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
    float seconds,minutes,hours,days;        //The number of seconds entered by the user
    
    //Input or initialize values Here
    cout<<"Please enter the number of seconds"<<endl;
    cin>>seconds;
    
    //Calculations for seconds into minutes, hours, and days
    minutes=seconds/60;
    hours=seconds/3600;
    days=seconds/86400;
    
    //Process/Calculations Here/Output
    if (seconds>=60&&seconds<3600){
        cout<<"The amount of seconds entered is "<<minutes<<" minute(s)"<<endl;
    }
    else if (seconds>=3600&&seconds<86400){
        cout<<"The amount of seconds entered is "<<hours<<" hour(s)"<<endl;
    }
    else if (seconds>=86400){
        cout<<"The amount of seconds entered is "<<days<<" day(s)"<<endl;
    }
    else if (seconds<60){
        cout<<"You amount of seconds entered is "<<seconds<<" second(s)"<<endl;
    }
    //Exit
    return 0;
}

