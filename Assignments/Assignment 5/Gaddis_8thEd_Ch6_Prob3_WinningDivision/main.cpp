/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: Determine which division made the most in sales
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
double gtSles(string);
void fdHghst(string,string,string,string,double,double,double,double);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string div1,div2,div3,div4; //Name of the division
    unsigned int sales1,sales2,sales3,sales4; //Sales figures
    
    //Input or initialize values Here
    cout<<"Enter the name of the division ";
    cin>>div1;
    sales1=gtSles(div1);
    cout<<"Enter the name of the division ";
    cin>>div2;
    sales2=gtSles(div2);
    cout<<"Enter the name of the division ";
    cin>>div3;
    sales3=gtSles(div3);
    cout<<"Enter the name of the division ";
    cin>>div4;
    sales4=gtSles(div4);
    
    //Process/Calculations Here
    fdHghst(div1,div2,div3,div4,sales1,sales2,sales3,sales4);
    //Exit
    return 0;
}

double gtSles(string name){
    double num;
    do{
        if (num<0){
            cout<<"Please enter a number greater than 0, ";
        }
        cout<<"Enter the sales figures for this division ";
        cin>>num;
    }while(num<0);
    return num;
}

void fdHghst(string name1,string name2,string name3,string name4,double num1,double num2,double num3,double num4){
    if (num1>num2&&num1>num3&&num1>num4){
        cout<<"The "<<name1<<" has the highest sales figures with $"
                <<num1<<" in sales"<<endl;
    }
    else if (num2>num1&&num2>num3&&num2>num4){
        cout<<"The "<<name2<<" has the highest sales figures with $"
                <<num2<<" in sales"<<endl;
    }
    else if (num3>num1&&num3>num2&&num3>num4){
        cout<<"The "<<name3<<" has the highest sales figures with $"
                <<num3<<" in sales"<<endl;
    }
    else if (num4>num1&&num4>num2&&num4>num3){
        cout<<"The "<<name4<<" has the highest sales figures with $"
                <<num4<<" in sales"<<endl;
    }
}

