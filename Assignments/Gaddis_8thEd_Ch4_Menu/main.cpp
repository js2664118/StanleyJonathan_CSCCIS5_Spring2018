/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Menu for all ten Chapter 4 problems
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int choice;         //Variable to hold users choice
    
    //Input or initialize values Here
    cout<<"Which problem would you like to see?"<<endl;
    cout<<"Problem 1 Min/Max"<<endl;
    cout<<"Problem 2 Roman Numeral Converter"<<endl;
    cout<<"Problem 3 Magic Dates"<<endl;
    cout<<"Problem 4 Areas of Rectangles"<<endl;
    cout<<"Problem 5 BMI"<<endl;
    cout<<"Problem 6 Mass and Weight"<<endl;
    cout<<"Problem 7 Time Calculator"<<endl;
    cout<<"Problem 8 Color Mixer"<<endl;
    cout<<"Problem 9 Change for a Dollar Game"<<endl;
    cout<<"Problem 10 Days in a month"<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    switch (choice){
        case 1:{//Declare all Variables Here
    int x,y;    //Numbers for the user to input
    
    //Input or initialize values Here
    cout<<"Please enter two numbers ";
    cin>>x;
    cin>>y;
    
    //Process/Calculations Here
    if (x>y){
        cout<<x<<" is the larger number and "
                <<y<<" is the smaller number"<<endl;
    }
    else cout<<y<<" is the larger number and "
            <<x<<" is the smaller number"<<endl;
    
    //Output Located Here
    

    //Exit
    return 0;
        }
        case 2:{ //Declare all Variables Here
   
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
        case 3:{
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
        case 4:{//Declare all Variables Here
    int length1,length2,width1,width2;  //Length and widths of the rectangles
    int area1,area2;                    //Areas of the rectangles
    //Input or initialize values Here
    cout<<"Please enter the length of the first rectangle"<<endl;
    cin>>length1;
    cout<<"Please enter the width of the first rectangle"<<endl;
    cin>>width1;
    cout<<"Please enter the length of the second rectangle"<<endl;
    cin>>length2;
    cout<<"Please enter the width of the second rectangle"<<endl;
    cin>>width2;
    
    //Process/Calculations Here
    area1=length1*width1;
    area2=length2*width2;
    
    
    //Output Located Here
    cout<<"The area of the first rectangle = "<<area1<<endl;
    cout<<"The area of the second rectangle = "<<area2<<endl;
    
    if (area1>area2){
        cout<<"The first rectangle inputed has a bigger area "<<endl;
    }
    else {
        cout<<"The second rectangle inputed has a bigger area "<<endl;
    }

    //Exit
    return 0;
        }
        case 5:{//Declare all Variables Here
    int weight,height;              //Height, weight and BMI of the user
    int BMI;
    
    //Input or initialize values Here
    cout<<"Please enter your height in inches"<<endl;
    cin>>height;
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>weight;
    
    //Process/Calculations Here
    BMI=weight*703/pow(height,2);
    
    //Output Located Here
    cout<<"Your BMI = "<<BMI<<endl;
    if (BMI<25&&BMI>18.5){
        cout<<"You are considered to be at optimal weight"<<endl;
    }
    else if (BMI<18.5){
        cout<<"You are considered to be underweight"<<endl;
    }
    else if (BMI>25){
        cout<<"You are considered to overweight"<<endl;
    }
    //Exit
    return 0;
}
        case 6:{//Declare all Variables Here
    float mass,weight;        //The mass the user enters and the weight of the object
    
    //Input or initialize values Here
    cout<<"Please enter the mass of the object in kilograms"<<endl;
    cin>>mass;
    
    //Process/Calculations Here
    weight=mass*9.8;
    
    //Output
    cout<<"The weight of the object is "<<setprecision(2)<<fixed<<showpoint<<weight<<" Newtons"<<endl;
    if (weight>1000){
        cout<<"The object is too heavy"<<endl;
    }
    else if (weight<10){
        cout<<"The object is too light"<<endl;
    }
    //Exit
    return 0;
        }
        case 7:{//Declare all Variables Here
    float seconds,minutes,hours,days;        //The number of seconds entered by the user
    
    //Input or initialize values Here
    cout<<"Please enter the number of seconds"<<endl;
    cin>>seconds;
    
    //Calculations for seconds into minutes, hours, and days
    minutes=seconds/60;
    hours=seconds/3600;
    days=seconds/86400;
    
    //Process/Calculations Here/Output
    if (seconds>=60&&seconds<3600){
        cout<<"The amount of seconds entered is "<<minutes<<" minute(s)"<<endl;
    }
    else if (seconds>=3600&&seconds<86400){
        cout<<"The amount of seconds entered is "<<hours<<" hour(s)"<<endl;
    }
    else if (seconds>=86400){
        cout<<"The amount of seconds entered is "<<days<<" day(s)"<<endl;
    }
    else if (seconds<60){
        cout<<"You amount of seconds entered is "<<seconds<<" second(s)"<<endl;
    }
    //Exit
    return 0;
        }
        case 8:{//Declare all Variables Here
    string color1,color2;
    
    //Input or initialize values Here
    cout<<"Please enter a primary color (in lower case)"<<endl;
    cin>>color1;
    
    //Input Validation
    if (color1!="red"||color1!="blue"||color1!="yellow"){
        cout<<"Please enter an actual Primary color"<<endl;
    }
    //Input other color
    cout<<"Please enter another primary color (in lower case) to mix with"<<endl;
    cin>>color2;
    
    //Input Validation
    if (color2!="red"||color2!="blue"||color2!="yellow"){
        cout<<"Please enter an actual Primary color"<<endl;
    }
    
    //Process/Calculations Here
    if (color1=="red"&&color2=="blue"){
        cout<<"You have made the color purple"<<endl;
    }
    else if (color1=="red"&&color2=="yellow"){
        cout<<"You have made the color orange"<<endl;
    }
    else if (color1=="blue"&&color2=="yellow"){
        cout<<"You have made the color green"<<endl;
    }
    else if (color2=="red"&&color1=="blue"){
        cout<<"You have made the color purple"<<endl;
    }
    else if (color2=="red"&&color1=="yellow"){
        cout<<"You have made the color orange"<<endl;
    }
    else if (color2=="blue"&&color1=="yellow"){
        cout<<"You have made the color green"<<endl;
    }
    //Exit
    return 0;
        }
        case 9:{//Declare all Variables Here
    int penny=1;    //Variable to hold the value of a penny
    int nickel=5;   //Variable to hold the value of a nickel
    int dime=10;    //Variable to hold the value of a dime
    int quarter=25;  //Variable to hold the value of a quarter
    int pchoice;     //Variable to hold how many pennies the user picked
    int nchoice;     //Variable to hold how many nickels the user picked
    int dchoice;     //Variable to hold how many dimes the user picked
    int qchoice;    //Variable to hold how many  quarters the user picked
    int total;      //Variable to hold the total of what the user picked
    int DOLLAR=100;
    
    //Input or initialize values Here
    cout<<"Let's play a game"<<endl;
    cout<<"Please enter the number of quarters you want "<<endl;
    cin>>qchoice;
    cout<<"Please enter the number of dimes you want "<<endl;
    cin>>dchoice;
    cout<<"Please enter the number of nickels you want "<<endl;
    cin>>nchoice;
    cout<<"Please enter the number of pennies you want "<<endl;
    cin>>pchoice;
    
    //Process/Calculations Here
    total=(pchoice*penny)+(nchoice*nickel)+(dchoice*dime)+(qchoice*quarter);
    
    
    if (total>DOLLAR){
        int dif;        //Variable to hold the difference 
        dif=total-DOLLAR;
        cout<<"I'm sorry that is more than a dollar by "<<dif<<" cents"<<endl;
    }
    else if (total<DOLLAR){
        int dif;    //Variable to hold the difference
        dif=100-total;
        cout<<"I'm sorry that is less than a dollar by "<<dif<<" cents"<<endl;
    }
    else if (total==DOLLAR){
        cout<<"Congratulations that is exactly a dollar :)"<<endl;
    }
    //Output
    
    //Exit
    return 0;
        }
        case 10:{//Declare all Variables Here
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
    }
    //Exit
    return 0;
}

