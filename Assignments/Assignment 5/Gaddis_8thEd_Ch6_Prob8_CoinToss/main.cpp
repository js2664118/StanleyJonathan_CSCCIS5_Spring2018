/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: Simulate a coin toss
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void coinTos();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    int toss;       //number of tosses the user picks
    
    //Input or initialize values Here
    cout<<"How many times would you like to flip the coin? ";
    cin>>toss;
    //Process/Calculations Here
    for (int count=1;count<=toss;count++){
        coinTos();
    }
    //Exit
    return 0;
}

void coinTos(){
    int coin;
    coin=rand()%(2+1);
    if (coin==1)cout<<"The coin is Heads!"<<endl;
    else cout<<"The coin is tails!"<<endl;
}
