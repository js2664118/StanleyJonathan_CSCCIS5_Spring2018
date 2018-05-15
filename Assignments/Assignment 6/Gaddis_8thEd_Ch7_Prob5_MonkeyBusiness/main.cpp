/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 16, 2018, 12:30 PM
 * Purpose: Calculate the amount of food eaten by the 3 monkeys
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
    const int MONK=3;       //The rows for the monkeys array
    const int DAY=5;        //The columns for the monkeys array
    float monkeys[MONK][DAY];
    float totFood=0;
    float avgFood;
    float lowFood1=monkeys[0][0];
    float lowFood2=monkeys[0][0];
    float lowFood3=monkeys[0][0];
    float hgFood1=monkeys[0][0];
    float hgFood2=monkeys[0][0];
    float hgFood3=monkeys[0][0];
    
    //Input or initialize values Here
    for (int monk=0;monk<MONK;monk++){
        for (int day=0;day<DAY;day++){
            cout<<"How many pounds of food has monkey #"<<(monk+1)<<
                    " eaten in pounds for day "<<(day+1)<<": ";
            cin>>monkeys[monk][day];
        }
    }
    
    //Process/Calculations Here
    for (int monk=0;monk<MONK;monk++){
        for (int day=0;day<DAY;day++){
            totFood+=monkeys[monk][day];
        }
    }
    avgFood=totFood/DAY;
    cout<<"The average amount of food eaten per day "<<avgFood<<endl;
    
    //Calculate the least amount of food
    for (int monk=0,day=0;monk<MONK;monk++){
        lowFood1+=monkeys[monk][day];
    }
    for (int monk=1,day=0;monk<MONK;monk++){
        lowFood2+=monkeys[monk][day];
    }
    for (int monk=2,day=0;monk<MONK;monk++){
        lowFood3+=monkeys[monk][day];
    }
    if(lowFood1<lowFood2&&lowFood1<lowFood3){
        cout<<"The lowest amount of food was eaten by monkey #1"<<
                "eating a total of "<<lowFood1<<" pounds"<<endl;
    }
    else if(lowFood2<lowFood1&&lowFood2<lowFood3){
        cout<<"The lowest amount of food was eaten by monkey #2"<<
                "eating a total of "<<lowFood2<<" pounds"<<endl;
    }
    else if(lowFood3<lowFood1&&lowFood3<lowFood2){
        cout<<"The lowest amount of food was eaten by monkey #3"<<
                "eating a total of "<<lowFood3<<" pounds"<<endl;
    }
    
    //Calculate the highest amount of food
    for (int monk=0,day=0;monk<MONK;monk++){
        hgFood1+=monkeys[monk][day];
    }
    for (int monk=1,day=0;monk<MONK;monk++){
        hgFood2+=monkeys[monk][day];
    }
    for (int monk=2,day=0;monk<MONK;monk++){
        hgFood3+=monkeys[monk][day];
    }
    if(hgFood1>hgFood2&&hgFood1>hgFood3){
        cout<<"The highest amount of food was eaten by monkey #1 "<<
                "eating a total of "<<hgFood1<<" pounds"<<endl;
    }
    else if(hgFood2>hgFood1&&hgFood2>hgFood3){
        cout<<"The highest amount of food was eaten by monkey #2 "<<
                "eating a total of "<<hgFood2<<" pounds"<<endl;
    }
    else if(hgFood3>hgFood1&&hgFood3<hgFood2){
        cout<<"The highest amount of food was eaten by monkey #3 "<<
                "eating a total of "<<hgFood3<<" pounds"<<endl;
    }
    
    //Exit
    return 0;
}


