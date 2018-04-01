/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Calculate the weight with the given mass by the user
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float mass,weight;        //The mass the user enters and the weight of the object
    
    //Input or initialize values Here
    cout<<"Please enter the mass of the object in kilograms"<<endl;
    cin>>mass;
    
    //Process/Calculations Here
    weight=mass*9.8;
    
    //Output
    cout<<"The weight of the object is "<<setprecision(2)<<fixed<<showpoint<<weight<<" Newtons"<<endl;
    if (weight>1000){
        cout<<"The object is too heavy"<<endl;
    }
    else if (weight<10){
        cout<<"The object is too light"<<endl;
    }
    //Exit
    return 0;
}

