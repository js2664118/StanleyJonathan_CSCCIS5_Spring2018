/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Calculate the ocean levels in 25 years
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
    float level=1.5;        //How much the ocean level is rising
    float total;            //Hold the total for what ocean levels will be
    
    //Process/Calculations Here
    for (int count=1;count<=25;count++){
        total+=level;
        cout<<"The ocean level has risen by "<<total<<" millimeters after "<<count<<" year(s)"<<endl;
    }
    
    //Exit
    return 0;
}

