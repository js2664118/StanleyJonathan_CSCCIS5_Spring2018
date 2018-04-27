/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Make a Celsius temperature table
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float celsius(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float temp;   //Value of the Fahrenheit temperature in Celsius
    //Input or initialize values Here
    cout<<setprecision(1)<<fixed<<showpoint<<endl;
    //Process/Calculations Here
    for (int count=1;count<=20;count++){
        temp=celsius(count);
        cout<<count<<" degrees Fahrenheit is "<<temp<<" degrees Celsius"<<endl;
    }
    
    //Exit
    return 0;
}

float celsius(int Fheit){
    float cels;
    cels=(5.0f/9.0f)*(Fheit-32);
    return cels;
}