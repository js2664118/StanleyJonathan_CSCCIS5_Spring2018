/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 15, 2018, 12:30 PM
 * Purpose: Calculate the Rainfall statistics for the year
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
    const int SIZE=12;        //Size of the array
    double rfall[SIZE]; //Array to hold the rainfall for each of the 12 months
    double total=0;     //Running total to sum up the whole array
    float avgrn;        //The average amount of rainfall per month
    float low=rfall[0];          //lowest number in the array
    float high=rfall[0];         //Highest number in the array
    
    //Input or initialize values Here
    cout<<"Enter the amount of rainfall in inches for each month"<<endl;
    for (int count=0;count<SIZE;count++){
        cout<<"Enter the amount of rainfall for month "<<(count+1)<<" ";
        cin>>rfall[count];
        if (rfall[count]<0){
            do{
            cout<<"Please enter a non-negative number ";
            cin>>rfall[count];
            }while (rfall[count]<0);
        }
    }
    
    //Process/Calculations Here
    //Sum of the array
    for (int i=0;i<SIZE;i++){
        total+=rfall[i];
    }
    //Lowest number
    for (int j=0;j<SIZE;j++){
        if (low>rfall[j])low=rfall[j];
    }
    
    //Highest number
    for (int h=0;h<SIZE;h++){
        if (high<rfall[h])high=rfall[h];
    }
    avgrn=total/SIZE;
    
    //Output
    cout<<"The total rainfall throughout the year is: "<<total<<" in."<<endl;
    cout<<"The average rainfall is: "<<avgrn<<" in."<<endl;
    cout<<"The highest recorded rainfall is: "<<high<<" in."<<endl;
    cout<<"The lowest recorded rainfall is: "<<low<<" in."<<endl;
    
    //Exit
    return 0;
}

