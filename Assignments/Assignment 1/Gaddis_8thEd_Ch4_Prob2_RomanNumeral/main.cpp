/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 13, 2018, 1:00 PM
 * Purpose:  Convert a number between 1,10 and convert it into Roman numerals
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
    int RoNum;            //x is the number from the user
    
    //Input or initialize values Here
    cout<<"Please enter a number between 1 and 10 ";
    cin>>RoNum;
    
    //Process/Calculations Here
    switch (RoNum)
    {   case 1:cout<<"The roman numeral for 1 = I"<<endl;
                break;
        case 2:cout<<"The roman numeral for 2 = II"<<endl;
                break;
        case 3:cout<<"The roman numeral for 3 = III"<<endl;
                break;
        case 4:cout<<"The roman numeral for 4 = IV"<<endl;
                break;
        case 5:cout<<"The roman numeral for 5 = V"<<endl;
                break;
        case 6:cout<<"The roman numeral for 6 = VI"<<endl;
                break;
        case 7:cout<<"The roman numeral for 7 = VII"<<endl;
                break;
        case 8:cout<<"The roman numeral for 8 = VIII"<<endl;
                break;
        case 9:cout<<"The roman numeral for 9 = IX"<<endl;
                break;
        case 10:cout<<"The roman numeral for 10 = X"<<endl;
                break;
        default :cout<<"Invalid number"<<endl;
                 cout<<"Please start the program again"<< 
                       " and enter a number within the range given"<<endl;
            
            
    }
    //Output Located Here
    

    //Exit
    return 0;
}

