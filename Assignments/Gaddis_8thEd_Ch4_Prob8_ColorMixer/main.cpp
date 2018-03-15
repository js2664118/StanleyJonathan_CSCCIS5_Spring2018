/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Mix the colors given by the user
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
    string color1,color2;
    
    //Input or initialize values Here
    cout<<"Please enter a primary color (in lower case)"<<endl;
    cin>>color1;
    
    //Input Validation
    if (color1!="red"||color1!="blue"||color1!="yellow"){
        cout<<"Please enter an actual Primary color"<<endl;
    }
    //Input other color
    cout<<"Please enter another primary color (in lower case) to mix with"<<endl;
    cin>>color2;
    
    //Input Validation
    if (color2!="red"||color2!="blue"||color2!="yellow"){
        cout<<"Please enter an actual Primary color"<<endl;
    }
    
    //Process/Calculations Here
    if (color1=="red"&&color2=="blue"){
        cout<<"You have made the color purple"<<endl;
    }
    else if (color1=="red"&&color2=="yellow"){
        cout<<"You have made the color orange"<<endl;
    }
    else if (color1=="blue"&&color2=="yellow"){
        cout<<"You have made the color green"<<endl;
    }
    else if (color2=="red"&&color1=="blue"){
        cout<<"You have made the color purple"<<endl;
    }
    else if (color2=="red"&&color1=="yellow"){
        cout<<"You have made the color orange"<<endl;
    }
    else if (color2=="blue"&&color1=="yellow"){
        cout<<"You have made the color green"<<endl;
    }
    //Exit
    return 0;
}

