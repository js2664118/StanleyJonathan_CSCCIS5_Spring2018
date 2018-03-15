/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Calculate the BMI 
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int weight,height;              //Height, weight and BMI of the user
    
    //Input or initialize values Here
    cout<<"Please enter your height in inches"<<endl;
    cin>>height;
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>weight;
    
    //Process/Calculations Here
    BMI=weight*703/pow(height,2);
    
    //Output Located Here
    cout<<BMI<<endl;
    //Exit
    return 0;
}

