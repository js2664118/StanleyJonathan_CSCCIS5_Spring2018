/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 27, 2018, 12:30 PM
 * Purpose: Validate if the users charge number is in the array 
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
    const int SIZE=18;          //Size of the array
    int array[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,
                     4562555,5552012,5050552,7825877,1250255,1005231,6545231,
                     3852085,7576651,7881200,4581002};
    bool found=false;   //flag when the value is found
    int elem=0;           //Element in which the value is found
    
    //Input or initialize values Here
    cout<<"Enter your charge account number ";
    cin>>num;
    while (!found&&elem<SIZE){
        if (array[elem]==num){
            found=true;
            cout<<"Your charge account number was valid and found at element "
                    <<elem+1<<endl;
        }
        elem++;
    }
    if (found==false)cout<<"The number you entered was not"
            " found in the array"<<endl;
    //Process/Calculations Here
    
    //Exit
    return 0;
}

