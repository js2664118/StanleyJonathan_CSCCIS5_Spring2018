/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: Calculate the distance fallen
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float falDist(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int MAX=10; //Max number for the loop counter
    float dist; //Distance the object traveled
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    for (int count=1;count<=MAX;count++){
        dist=falDist(count);
        cout<<"The distance fallen after "<<count<<" seconds is "<<dist<<" meters"<<endl;
    }
    //Exit
    return 0;
}

float falDist (int num){
    float d;
    float g=9.8;
    d=(0.5*g)*pow(num,2);
    return d;
}