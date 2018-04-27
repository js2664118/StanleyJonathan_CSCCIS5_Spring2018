/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: Calculate the amount needed to be deposited today for the desired
 *          amount
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float prstVal(double,float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    double F;  //Value of the future amount
    float r;    //Value of the interest rate
    int n;      //Number of years 
    char choice;    //User choice to run again 
    float prsnt;    //Present value
    do{
        //Input or initialize values Here
        cout<<"Enter the future amount ";
        cin>>F;
        cout<<"Enter the interest rate ";
        cin>>r;
        cout<<"Enter the number of years ";
        cin>>n;
    
        //Process/Calculations Here
        prsnt=prstVal(F,r,n);
        cout<<"The present value needed to attain the future amount is $"<<prsnt<<endl;
        cout<<"Would you like to try some different numbers? (y or n)";
        cin>>choice;
    }while (choice=='y');
    //Exit
    return 0;
}

float prstVal(double num1,float num2, int num3){
    float P;
    P=num1/pow((1+(num2/100)),num3);
    return P;
}
