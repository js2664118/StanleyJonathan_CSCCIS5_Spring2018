/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 9:25 AM
 * Purpose: Determine if the date entered by the user is a magic date
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here
//Function Prototypes Here
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float month,day,year;           //Month,Day,and Year inputed by the user
    
    //Input
    cout<<"Please enter a month in numeric form "<<endl;
    cin>>month;
    
    //Input Validation for month
    if (month>12){
        cout<<"Please enter a valid month in numeric form"<<endl;
        cout<<"Between 1(January) and 12(December)"<<endl;
        cin>>month;
    }
    
    //Input
    cout<<"Please enter a day "<<endl;
    cin>>day;
    
    //Input Validation for day
    if (day>31){
        cout<<"Please enter a day between 1 and 31"<<endl;
        cin>>day;
    }
    //Input
    cout<<"Please enter a two digit year "<<endl;
    cin>>year;
    //Input validation for yea
    if (year>99){
        cout<<"Please enter a two digit year"<<endl;
        cin>>year;
    }
    
    //Process/Calculations Here
    if ((month*day)==year){
        cout<<"This date is magic!"<<endl;
    }
    else{
        cout<<"This date is not magic :("<<endl;
    }
    
    //Exit
    return 0;
}

