/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: Calculate the area of a rectangle
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
double gtLen();
double gtWid();
double gtArea(int,int);
void display(int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int length,width,area;   //Length and width of the rectangle
    
    //Input or initialize values Here
    length=gtLen();
    width=gtWid();
    area=gtArea(length,width);
    display(length,width,area);
    //Process/Calculations Here
    
    //Exit
    return 0;
}

double gtLen(){
    int length;
    cout<<"Enter the length of the rectangle ";
    cin>>length;
    return length;
}

double gtWid(){
    int width;
    cout<<"Enter the width of the rectangle ";
    cin>>width;
    return width;
}

double gtArea(int num1,int num2){
    int area;
    area=num1*num2;
    return area;
}
void display(int num1,int num2,int num3){
    cout<<"The length of the rectangle is "<<num1<<endl;
    cout<<"The width of the rectangle is "<<num2<<endl;
    cout<<"The area of the rectangle is "<<num3<<endl;
}