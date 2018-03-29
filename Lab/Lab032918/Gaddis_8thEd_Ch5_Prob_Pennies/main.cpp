/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March, 2018, 11:30 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int totPay,pyPrDay;//Pennies of day
    char numDays=31;//Most number of days in a month
    
    //Input or initialize values Here
    
    pyPrDay=1;//1 penny on the first day
    totPay=pyPrDay;//total amount
    //Process/Calculations Here
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Day       Pay         Total"<<endl;
    for (int day=1;day<=numDays;day++){
        cout<<setw(2)<<day<<
                setw(12)<<pyPrDay/100.0f<<
                setw(12)<<totPay/100.0f<<endl;
        pyPrDay*=2;
        totPay+=pyPrDay;
    }
    
    //Output Located Here
    

    //Exit
    return 0;
}

