/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float findV (float,float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float mass,veloc; //Values for mass and velocity
    float energy;   //Kinetic energy of object
    
    //Input or initialize values Here
    cout<<"What is the mass of the object in kg ";
    cin>>mass;
    cout<<"How fast is the object going in meters/second ";
    cin>>veloc;
    energy=findV(mass,veloc);
    //Process/Calculations Here
    cout<<"The Kinetic Energy of the object is "<<energy<<" m/s^2"<<endl;
    
    //Exit
    return 0;
}

float findV(float m,float v){
    float KE;   //Kinetic energy of object
    KE=(0.5*m)*pow(v,2);
    return KE;
}
