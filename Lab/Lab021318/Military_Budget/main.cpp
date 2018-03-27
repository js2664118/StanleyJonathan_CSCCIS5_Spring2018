/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on February 13, 2018, 12:05 PM
 * Purpose: Military budget
 */

//System libraries
#include <iostream>     //I/O Library -> cout,endl

using namespace std;        //namespace I/O stream library was created 

//User Libraries

//Global constants
//Math, Physics, Science, Conversions, 2-D Array columns
const float TRLLN=1.0e12f;  //Trillion
const float BLLN=1.0e9f;    //Billion
const int   PRCNT=100;      //Conversion for a percent

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float milBdgt,fedBdgt,pcntMil;
    
    //Initial variables
    milBdgt=639*BLLN;
    fedBdgt=4.1*TRLLN;
    
    //Map/Process inputs to outputs
    pcntMil=milBdgt/fedBdgt*PRCNT;
    
    //display outputs
    cout<<"Military Budget = $"<<milBdgt/BLLN<<"Billion"<<endl;
    cout<<"Federal Budget  = $"<<fedBdgt/TRLLN<<"Trillion"<<endl;
    cout<<"Military Percentage = $"<<pcntMil<<"%"<<endl;
    
    //exit program
    return 0;
}

