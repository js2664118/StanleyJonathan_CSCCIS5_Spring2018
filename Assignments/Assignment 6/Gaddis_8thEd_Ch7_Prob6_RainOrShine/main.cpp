/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 26, 2018, 12:30 PM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int MONTH=3,DAY=30;
    char rain[MONTH][DAY];       //Array for the weather data 
    string months[]={"June","July","August"};
    ofstream rnFile;     //file with the weather data
    int temp;           //To hold the random number
    ifstream read;      //Reading the file of weather data
    int rtot=0,ctot=0,stot=0,rovr=0,covr=0,sovr=0;     //Total amount of days that are rainy, cloudy, sunny
    int counter[3];     //Array to count which month had the most rainy days
    
    //Open the file
    rnFile.open("RainOrShine.txt");
    
    //Write data to a file
    for (int i=0;i<MONTH;i++){
        for (int j=0;j<DAY;j++){
            temp=rand()%3+1;
            if(temp==3)rnFile<<"R"<<endl;
            else if (temp==2)rnFile<<"C"<<endl;
            else if (temp==1)rnFile<<"S"<<endl;
        }
    }
    rnFile.close();
    
    //Read file to the array and display report
    read.open("RainOrShine.txt");
    for (int r=0;r<MONTH;r++){
        rtot=0;
        ctot=0;
        stot=0;
        cout<<months[r]<<": ";
        for (int c=0;c<DAY;c++){
            read>>rain[r][c];
            cout<<rain[r][c]<<" ";
            if ((rain[r][c])=='R')rtot++,rovr++,counter[r]++;
            else if ((rain[r][c])=='C')ctot++,covr++;
            else if ((rain[r][c])=='S')stot++,sovr++;
        }
        cout<<"There were "<<rtot<<" rainy days, "<<ctot<<" cloudy days, and "
                <<stot<<" sunny days in "<<months[r]<<endl;
    }
    read.close();
    cout<<"Overall there were "<<rovr<<" rainy days, "<<covr<<
            " cloudy days, and "<<sovr<<" sunny days"<<endl;
    //Process/Calculations Here
    if (counter[0]>counter[1]&&counter[0]>counter[1]){
        cout<<"June had the most rainy days with "
                <<counter[0]<<" rainy days"<<endl;
    }
    else if (counter[1]>counter[0]&&counter[1]>counter[2]){
        cout<<"July had the most rainy days with "
                <<counter[1]<<" rainy days"<<endl;
    }
    else if (counter[2]>counter[0]&&counter[2]>counter[1]){
        cout<<"August had the most rainy days with "
                <<counter[2]<<" rainy days"<<endl;
    }
    //Exit
    return 0;
}

