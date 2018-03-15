/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 11:00 AM
 * Purpose: Determine which rectangle has the greater area based on the length
 *          and width inputed by the user
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
    int length1,length2,width1,width2;  //Length and widths of the rectangles
    int area1,area2;                    //Areas of the rectangles
    //Input or initialize values Here
    cout<<"Please enter the length of the first rectangle"<<endl;
    cin>>length1;
    cout<<"Please enter the width of the first rectangle"<<endl;
    cin>>width1;
    cout<<"Please enter the length of the second rectangle"<<endl;
    cin>>length2;
    cout<<"Please enter the width of the second rectangle"<<endl;
    cin>>width2;
    
    //Process/Calculations Here
    area1=length1*width1;
    area2=length2*width2;
    
    
    //Output Located Here
    cout<<"The area of the first rectangle = "<<area1<<endl;
    cout<<"The area of the second rectangle = "<<area2<<endl;
    
    if (area1>area2){
        cout<<"The first rectangle inputed has a bigger area "<<endl;
    }
    else {
        cout<<"The second rectangle inputed has a bigger area "<<endl;
    }

    //Exit
    return 0;
}

