/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 6, 2018, 12:00 PM
 * Purpose: Calculate how much income was generated from each class of seats
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ClassA,ClassB,ClassC; //Amount of tickets sold for each of the classes
    int ticA=15,ticB=12,ticC=9;    //Cost of tickets
    float totA,totB,totC;       //Total made from each class
    float TOTAL;                //Total income generated
    
    //Initial Variables
    cout<<"How many tickets did you sell for Class A?"<<endl;
    cin>>ClassA;
    cout<<"How many tickets did you sell for Class B?"<<endl;
    cin>>ClassB;
    cout<<"How many tickets did you sell for Class C?"<<endl;
    cin>>ClassC;
    
    //Map/Process Inputs to Outputs
    totA=ClassA*ticA;
    totB=ClassB*ticB;
    totC=ClassC*ticC;
    TOTAL=totA+totB+totC;
    
    //Display Outputs
    cout<<"Income generated"<<endl;
    cout<<"----------------"<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Class A        ="<<setw(8)<<totA<<endl;
    cout<<"Class B        ="<<setw(8)<<totB<<endl;
    cout<<"Class C        ="<<setw(8)<<totC<<endl;
    cout<<"Total Income   ="<<setw(8)<<TOTAL<<endl;
    
    //Exit program!
    return 0;
}