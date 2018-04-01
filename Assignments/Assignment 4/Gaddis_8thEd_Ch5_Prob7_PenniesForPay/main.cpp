/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Calculate the number of pennies made per day
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
}

