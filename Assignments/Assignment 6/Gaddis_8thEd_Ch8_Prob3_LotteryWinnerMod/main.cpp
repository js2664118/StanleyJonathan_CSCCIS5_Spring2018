/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 27, 2018, 12:30 PM
 * Purpose: Check winning lottery numbers with a binary search
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
    int first=0,middle,last=SIZE-1;  //First, middle, and last positions 
                                            //of the array
    
    //Input or initialize values Here
    cout<<"Enter this weeks winning numbers ";
    cin>>num;
    while (!found&&first<=last){
        middle=(first+last)/2; 
        if (array[middle]==num){
            found=true;
        }
        else if (array[middle]>num)last=middle-1;
        else first=middle+1;
    }
    if (found==true){
        cout<<"Congratulations you won the lottery!!!"<<endl;
    }
    else if (found==false)cout<<"Your number combinations did not match the"
            " winning lottery numbers"<<endl;
    //Exit
    return 0;
}

