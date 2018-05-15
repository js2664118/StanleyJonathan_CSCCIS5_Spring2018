/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 16, 2018, 12:30 PM
 * Purpose: Display all numbers greater than the number n
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void dsLarge(const int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=20;      //Size of the array
    int numbs[SIZE];        //Array of the numbers compared to n
    int n;      //random number 
    
    //Giving n a random value
    n=rand()%100+1;
    
    //Assigning random numbers to the array
    cout<<"Array numbers "<<endl;
    for (int count=0;count<SIZE;count++){
        numbs[count]=rand()%100+1;
        cout<<numbs[count]<<" ";
    }
    cout<<"n = "<<n<<endl;
    cout<<endl;
    dsLarge(numbs,SIZE,n);
    
    //Process/Calculations Here
    
    
    //Exit
    return 0;
}

void dsLarge(const int numbrs[],int size,int m){
    for (int i=0;i<size;i++){
        if (m<numbrs[i]){
            cout<<numbrs[i]<<" ";
        }
    }
    cout<<"Are all larger than n from the array"<<endl;
}
