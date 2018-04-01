/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Determine the number of calories burned
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
    return 0;
}

