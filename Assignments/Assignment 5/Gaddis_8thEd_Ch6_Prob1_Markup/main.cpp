/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: Calculate the retail price of an item
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float calcRtl(float,float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float whlesl;   //Wholesale cost of the item
    float perc;     //Markup percentage
    float rtlprc;   //Retail price of the item
    
    //Input or initialize values Here
    do{
        if( whlesl<0||perc<0){
            cout<<"Please enter a non-negative value"<<endl;
        }
        cout<<"Enter the wholesale cost of the item and the markup percentage ";
        cin>>whlesl>>perc;
    }while (whlesl<0||perc<0);
    rtlprc=calcRtl(whlesl,perc);
    cout<<"The retail price is "<<rtlprc<<endl;
    //Process/Calculations Here
    
    //Exit
    return 0;
}

float calcRtl(float num1,float num2){
    float mrkup;
    mrkup=num1*(1+(num2/100));
    return mrkup;
}

