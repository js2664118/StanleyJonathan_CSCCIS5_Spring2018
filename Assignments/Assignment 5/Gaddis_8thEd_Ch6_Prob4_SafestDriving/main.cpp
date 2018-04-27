/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 5, 2018, 12:30 PM
 * Purpose: Determine which area has the fewest amount of accidents
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
double gtAccdt(string);
void fdLowst(string,string,string,string,string,double,double,double,double,double);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string area1,area2,area3,area4,area5; //Name of the division
    unsigned int mis1,mis2,mis3,mis4,mis5; //Sales figures
    
    //Input or initialize values Here
    cout<<"Enter the name of the region ";
    cin>>area1;
    mis1=gtAccdt(area1);
    cout<<"Enter the name of the region ";
    cin>>area2;
    mis2=gtAccdt(area2);
    cout<<"Enter the name of the region ";
    cin>>area3;
    mis3=gtAccdt(area3);
    cout<<"Enter the name of the region ";
    cin>>area4;
    mis4=gtAccdt(area4);
    cout<<"Enter the name of the region ";
    cin>>area5;
    mis5=gtAccdt(area5);
    
    //Process/Calculations Here
    fdLowst (area1,area2,area3,area4,area5,mis1,mis2,mis3,mis4,mis5);
    
    //Exit
    return 0;
}

double gtAccdt(string name){
    double num;
    do{
        if (num<0){
            cout<<"Please enter a number greater than 0, ";
        }
        cout<<"Enter the number of accidents in this area ";
        cin>>num;
    }while(num<0);
    return num;
}

void fdLowst (string name1,string name2,string name3,string name4,string name5,double num1,double num2,double num3,double num4,double num5){
    if (num1<num2&&num1<num3&&num1<num4&&num1<num5){
        cout<<"The "<<name1<<" region has the lowest accidents in the city with only "
                <<num1<<" accident(s)"<<endl;
    }
    else if (num2<num1&&num2<num3&&num2<num4&&num2<num5){
        cout<<"The "<<name2<<" region has the lowest accidents in the city with only "
                <<num2<<" accident(s)"<<endl;
    }
    else if (num3<num1&&num3<num2&&num3<num4&&num3<num5){
        cout<<"The "<<name3<<" region has the lowest accidents in the city with only "
                <<num3<<" accident(s)"<<endl;
    }
    else if (num4<num1&&num4<num2&&num4<num3&&num4<num5){
        cout<<"The "<<name4<<" region has the lowest accidents in the city with only "
                <<num4<<" accident(s)"<<endl;
    }
    else if (num5<num1&&num5<num2&&num5<num3&&num5<num4){
        cout<<"The "<<name5<<" region has the lowest accidents in the city with only "
                <<num5<<" accident(s)"<<endl;
    }
}

