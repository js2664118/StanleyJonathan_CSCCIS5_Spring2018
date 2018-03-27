/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: This is your template for your Mac
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
    int fees=2500;  //Variable to hold the original membership fee
    int inc=1.04;   //Variable to hold the percentage difference
    int rate;       //Variable to hold difference in money
    
    //Process/Calculations Here
    for (int count=1;count<=6;count++){
        rate=fees*inc;
        cout<<"The new membership fee after "<<count<<" years"<<endl;
    }
    //Exit
    return 0;
}

