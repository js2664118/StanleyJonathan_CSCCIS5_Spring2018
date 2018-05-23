/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 6, 2018, 10:00 PM
 * Purpose: Calculate a cars gas mileage
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float MPG,gallon,fllMile;   //Variables needed to be input by the user
    
    //Initial Variables
    cout<<"How many gallons of gas can your car hold?"<<endl;
    cin>>gallon;
    cout<<"How many miles can you drive on a full tank?"<<endl;
    cin>>fllMile;
    
    //Map/Process Inputs to Outputs
    MPG=fllMile/gallon;     //Calculate the miles per gallon
    
    //Display Outputs
    cout<<"Your car's MPG is "<<MPG<<endl;
    
    //Exit program!
    return 0;
}