/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 6, 2018, 12:00 PM
 * Purpose: Calculate the average score
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
    float a,b,c,d,e;      //Variables to hold the different test scores
    float total;          //total of all tests
    float AVG;            //average of all tests
    
    //Initial Variables
    cout<<"What are the 5 test scores?"<<endl;
    cout<<"Score for test 1?"<<endl;
    cin>>a;
    cout<<"Score for test 2?"<<endl;
    cin>>b;
    cout<<"Score for test 3?"<<endl;
    cin>>c;
    cout<<"Score for test 4?"<<endl;
    cin>>d;
    cout<<"Score for test 5?"<<endl;
    cin>>e;
    
    //Map/Process Inputs to Outputs
    total=a+b+c+d+e;    
    AVG=total/5;
    
    //Display Outputs
    cout<<setprecision(1)<<fixed<<showpoint<<endl;
    cout<<"The average of all the tests is "<<AVG<<endl;
    
    //Exit program!
    return 0;
}