/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 15, 2018, 12:00 PM
 * Purpose:  Determine the smallest and largest number in the array
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
    const int SIZE=10;
    int numbrs[SIZE];
    int num;
    
    
    //Input or initialize values Here
    cout<<"Enter 10 numbers and I will "
            <<"find the smallest and largest numbers "<<endl;
    for (int count=0;count<SIZE;count++){
        cout<<"Enter a number ";
        cin>>num;
        numbrs[count]=num;
        num=0;
    }
    //Process/Calculations Here
    int low=numbrs[0];
    int high=numbrs[0];
    for (int i=1;i<SIZE;i++){
        if(low>numbrs[i])low=numbrs[i];
    }
    for (int j=1;j<SIZE;j++){
        if(high<numbrs[j])high=numbrs[j];
    }
    
    //Output Located Here
    cout<<"The lowest number is "<<low<<endl;
    cout<<"And the highest number is "<<high<<endl;

    //Exit
    return 0;
}

