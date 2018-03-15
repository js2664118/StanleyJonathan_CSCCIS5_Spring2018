/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 13, 2018, 11:00 AM
 * Purpose: Determine which number is smaller and which is larger
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
    int x,y;    //Numbers for the user to input
    
    //Input or initialize values Here
    cout<<"Please enter two numbers ";
    cin>>x;
    cin>>y;
    
    //Process/Calculations Here
    if (x>y){
        cout<<x<<" is the larger number and "
                <<y<<" is the smaller number"<<endl;
    }
    else cout<<y<<" is the larger number and "
            <<x<<" is the smaller number"<<endl;
    
    //Output Located Here
    

    //Exit
    return 0;
}

