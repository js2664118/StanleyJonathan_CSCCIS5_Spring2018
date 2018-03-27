/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Determine how many days are in the month
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
    int month;     //Variable to hold what month the user picked
    int year;      //Variable to hold the year the user chooses
    
    //Input or initialize values Here
    cout<<"Please enter a month (from a range of 1~12) ";
    cin>>month;
    cout<<"Please enter a year ";
    cin>>year;
    
    //Process/Calculations Here
    switch (month){
        case 1: {cout<<"January has 31 days"<<endl;
                    break;
        }
        case 2: {if (year%100==0){
                    if (year%400==0){
                    cout<<"This is a leap year and February has 29 days"<<endl;
                    }
                }
                else if (year%4==0){
                    cout<<"This is a leap year and February has 29 days"<<endl;
                }
                else {
                    cout<<"February has 28 days"<<endl;
                }
                    break;
        }
        case 3: {cout<<"March has 31 days"<<endl;
                    break;
        }
        case 4: {cout<<"April has 30 days"<<endl;
                    break;
        }
        case 5: {cout<<"May has 31 days"<<endl;
                    break;
        }
        case 6: {cout<<"June has 30 days"<<endl;
                    break;
        }
        case 7: {cout<<"July has 31 days"<<endl;
                    break;
        }
        case 8: {cout<<"August has 31 days"<<endl;
                    break;
        }
        case 9: {cout<<"September has 30 days"<<endl;
                    break;
        }
        case 10:{cout<<"October has 31 days"<<endl;
                    break;
        }
        case 11:{cout<<"November has 30 days"<<endl;
                    break;
        }
        case 12:{cout<<"December has 31 days"<<endl;
                    break;
        }
    } 
    //Exit
    return 0;
}

