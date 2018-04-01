/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Celsius to Fahrenheit table
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
    float celsius,fahr;    //to hold Celsius and Fahrenheit temperatures
    
    //Input or initialize values Here
    celsius=1;
    
    //Process/Calculations Here
    for (int count=1;count<=20;count++){
       fahr=(celsius*1.8)+32;
       cout<<"Celsius = "<<celsius<<" Fahrenheit = "<<fahr<<endl;
       celsius++;
    }
    
    //Exit
    return 0;
}

