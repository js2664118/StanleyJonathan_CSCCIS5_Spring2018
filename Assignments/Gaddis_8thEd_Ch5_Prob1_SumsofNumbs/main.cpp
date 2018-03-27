/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 25, 2018, 12:30 PM
 * Purpose: Get the sum of numbers up to the number entered
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int num;     //Variable to hold the number that the user enters
    int total;      //Variable to hold the total of sums
    
    //Input or initialize values Here
    cout<<"Please enter a non-negative number between 1 and 50"<<endl;
    cin>>num;
    
    while (num<1||num>50){
        cout<<"Please enter a valid number between 1 and 50"<<endl;
        cin>>num;
    }
    
    for (int count=0;count<=num;count++){
        total+=count;
    }
    
    //Process/Calculations Here
    cout<<"The sum of the number up to "<<num<<" is "<<total<<endl;
    
    //Exit
    return 0;
}

