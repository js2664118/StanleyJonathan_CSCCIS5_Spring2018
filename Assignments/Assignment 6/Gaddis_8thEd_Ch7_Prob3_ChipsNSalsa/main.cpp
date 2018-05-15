/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 16, 2018, 12:30 PM
 * Purpose: Calculate the statistics on the users sales of jars of salsa
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void gtSales(const string[],int[],int);
void dsSales(const string[],const int[],int);
void sumSale(const int[],int);
void lwSale(const string[],const int[],int);
void hgSale(const string[],const int[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=5;       //Size of the array
    string name[SIZE]={"Mild","Medium","Sweet","Hot","Zesty"};  //Names of each jar
    int sales[SIZE];        //Sales of each jar
    
    //Input or initialize values Here
    gtSales(name,sales,SIZE);
    dsSales(name,sales,SIZE);
    sumSale(sales,SIZE);
    lwSale(name,sales,SIZE);
    hgSale(name,sales,SIZE);
    
    //Process/Calculations Here
    
    //Exit
    return 0;
}

void gtSales(const string nam[],int num[],int size){
    for (int count=0;count<size;count++){
        cout<<"Enter the sales for "<<nam[count]<<" Salsa: ";
        cin>>num[count];
        while (num[count]<0){
            cout<<"Enter a non-negative number: ";
            cin>>num[count];
        }
    }
}

void dsSales(const string nam[],const int num[],int size){
    for (int i=0;i<size;i++)cout<<nam[i]<<" Salsa sold "<<num[i]<<" jars"<<endl;
}

void sumSale(const int num[],int size){
    int total=0;
    for (int j=0;j<size;j++){
        total+=num[j];
    }
    cout<<"Total jars sold = "<<total<<endl;
}

void lwSale(const string nam[],const int num[],int size){
    int low=num[0];
    string lwname;
    for (int l=0;l<size;l++){
        if (low>num[l]){
            low=num[l];
            lwname=nam[l];
        }
    }
    cout<<lwname<<" Salsa sold the least amount of jars with only "
            <<low<<" jars sold"<<endl;
}

void hgSale(const string nam[],const int num[],int size){
    int high=num[0];
    string hname;
    for (int h=0;h<size;h++){
        if (high<num[h]){
            high=num[h];
            hname=nam[h];
        }
    }
    cout<<hname<<" Salsa sold the most amount of jars with "<<high<<" jars sold"
            <<endl;
}