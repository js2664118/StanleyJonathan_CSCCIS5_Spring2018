/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Create a change for a dollar game
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int DOLLAR=100;       //Dollar amount

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int penny=1;    //Variable to hold the value of a penny
    int nickel=5;   //Variable to hold the value of a nickel
    int dime=10;    //Variable to hold the value of a dime
    int quarter=25;  //Variable to hold the value of a quarter
    int pchoice;     //Variable to hold how many pennies the user picked
    int nchoice;     //Variable to hold how many nickels the user picked
    int dchoice;     //Variable to hold how many dimes the user picked
    int qchoice;    //Variable to hold how many  quarters the user picked
    int total;      //Variable to hold the total of what the user picked
    
    //Input or initialize values Here
    cout<<"Let's play a game"<<endl;
    cout<<"Please enter the number of quarters you want "<<endl;
    cin>>qchoice;
    cout<<"Please enter the number of dimes you want "<<endl;
    cin>>dchoice;
    cout<<"Please enter the number of nickels you want "<<endl;
    cin>>nchoice;
    cout<<"Please enter the number of pennies you want "<<endl;
    cin>>pchoice;
    
    //Process/Calculations Here
    total=(pchoice*penny)+(nchoice*nickel)+(dchoice*dime)+(qchoice*quarter);
    
    
    if (total>DOLLAR){
        int dif;        //Variable to hold the difference 
        dif=total-DOLLAR;
        cout<<"I'm sorry that is more than a dollar by "<<dif<<" cents"<<endl;
    }
    else if (total<DOLLAR){
        int dif;    //Variable to hold the difference
        dif=100-total;
        cout<<"I'm sorry that is less than a dollar by "<<dif<<" cents"<<endl;
    }
    else if (total==DOLLAR){
        cout<<"Congratulations that is exactly a dollar :)"<<endl;
    }
    //Output
    
    //Exit
    return 0;
}

