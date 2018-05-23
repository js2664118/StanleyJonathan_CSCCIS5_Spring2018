/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: This is your template for your Mac
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
    int num;        //Users charge account number
    const int SIZE=10;          //Size of the array
    int array[SIZE]={13579,26791,26792,33445,55555,62483,
                     77777,79422,85647,93121};
    bool found=false;   //flag when the value is found
    int elem=0;           //Element in which the value is found
    
    //Input or initialize values Here
    cout<<"Enter this weeks winning numbers ";
    cin>>num;
    while (!found&&elem<SIZE){
        if (array[elem]==num){
            found=true;
            cout<<"You won the lottery!!!!! "<<endl;
        }
        elem++;
    }
    if (found==false)cout<<"Your number combinations did not match the"
            " winning lottery numbers"<<endl;
    //Exit
    return 0;
}

