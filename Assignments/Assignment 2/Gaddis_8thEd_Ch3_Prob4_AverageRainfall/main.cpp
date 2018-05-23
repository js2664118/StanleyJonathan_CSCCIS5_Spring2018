/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 6, 2018, 12:00 PM
 * Purpose: Calculate the average rainfall for three months 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <string>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string monthA;
    string monthB;
    string monthC;    //Name of the months inputed from the user
    float rainA,rainB,rainC;
    float totRain;                //Amount of rain in inches each month
    float AVG;                      //average rainfall between three months
    
    //Initial Variables
    cout<<"What is the name of the first month"<<endl;
    getline(cin,monthA);
    cout<<"How much rain was in this month in inches?"<<endl;
    cin>>(cin,rainA);
    
    //Get the name and rain in the second month
    cout<<"What is the name of the second month"<<endl;
    getline(cin,monthB);
    cout<<"How much rain was in this month in inches?"<<endl;
    cin>>(cin,rainB);
    
    //Get the Name and rain in the third month 
    cout<<"What is the name of the third month"<<endl;
    getline(cin,monthC);
    cout<<"How much rain was in this month in inches?"<<endl;
    cin>>(cin,rainC);
    
    //Map/Process Inputs to Outputs
    totRain=rainA+rainB+rainC;
    AVG=totRain/3;
    
    //Display Outputs
    cout<<"The average rainfall in "<<monthA<<","<<monthB<<" and"<<monthC<<" is "<<AVG<<endl;
    
    
    //Exit program!
    return 0;
}