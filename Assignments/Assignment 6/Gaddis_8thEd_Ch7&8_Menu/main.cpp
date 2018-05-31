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
#include <ctime>
#include <fstream>
#include <string>

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
void dsLarge(const int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int mchoice;         //Variable to hold users choice
    char cont;           //Variable to ask the user if they want to continue
    
    //Input or initialize values Here
    do{
    cout<<"Which problem would you like to see?"<<endl;
    cout<<"Enter 1 for Largest/Smallest"<<endl;
    cout<<"Enter 2 for Rainfall Statistics"<<endl;
    cout<<"Enter 3 for Chips and Salsa"<<endl;
    cout<<"Enter 4 for Larger than 4"<<endl;
    cout<<"Enter 5 for Monkey Business"<<endl;
    cout<<"Enter 6 for Rain or Shine"<<endl;
    cout<<"Enter 7 for Charge account"<<endl;
    cout<<"Enter 8 for Lottery Winner"<<endl;
    cout<<"Enter 9 for Lottery Winner Modification"<<endl;
    cin>>mchoice;
    
    //Process/Calculations Here
    switch (mchoice){
        case 1:{
            //Declare all Variables Here
            const int SIZE=10;
            int numbrs[SIZE];
            int num;
    
    
            //Input or initialize values Here
            cout<<"Enter 10 numbers and I will "
                    <<"find the smallest and largest numbers "<<endl;
            for (int count=0;count<SIZE;count++){
                cout<<"Enter a number ";
                cin>>num;
                numbrs[count]=num;
                num=0;
            }
            //Process/Calculations Here
            int low=numbrs[0];
            int high=numbrs[0];
            for (int i=1;i<SIZE;i++){
                if(low>numbrs[i])low=numbrs[i];
            }
            for (int j=1;j<SIZE;j++){
                if(high<numbrs[j])high=numbrs[j];
            }
    
            //Output Located Here
            cout<<"The lowest number is "<<low<<endl;
            cout<<"And the highest number is "<<high<<endl;

    //Exit
    }break;
        case 2:{
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
    }break;
        case 3:{
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
    
    //Exit
    }break;
        case 4:{
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

    //Exit
    }break;
        case 5:{
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
        }break;
        case 6:{
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
        }break;
        case 7:{
        //Declare all Variables Here
    int num;        //Users charge account number
    const int SIZE=18;          //Size of the array
    int array[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,
                     4562555,5552012,5050552,7825877,1250255,1005231,6545231,
                     3852085,7576651,7881200,4581002};
    bool found=false;   //flag when the value is found
    int elem=0;           //Element in which the value is found
    
    //Input or initialize values Here
    cout<<"Enter your charge account number ";
    cin>>num;
    while (!found&&elem<SIZE){
        if (array[elem]==num){
            found=true;
            cout<<"Your charge account number was valid and found at element "
                    <<elem+1<<endl;
        }
        elem++;
    }
    if (found==false)cout<<"The number you entered was not"
            " found in the array"<<endl;
    //Process/Calculations Here
    
    //Exit
        }break;
        case 8:{
        //Declare all Variables Here
    int num;        //Users charge account number
    const int SIZE=10;          //Size of the array
    int array[SIZE]={13579,26791,26792,33445,55555,62483,
                     77777,79422,85647,93121};
    bool found=false;   //flag when the value is found
    int elem=0;           //Element in which the value is found
    
    //Input or initialize values Here
    cout<<"Enter this weeks winning numbers ";
    cin>>num;
    while (!found&&elem<SIZE){
        if (array[elem]==num){
            found=true;
            cout<<"You won the lottery!!!!! "<<endl;
        }
        elem++;
    }
    if (found==false)cout<<"Your number combinations did not match the"
            " winning lottery numbers"<<endl;
    //Exit
        }break;
        case 9:{
        //Declare all Variables Here
    int num;        //Users charge account number
    const int SIZE=10;          //Size of the array
    int array[SIZE]={13579,26791,26792,33445,55555,62483,
                     77777,79422,85647,93121};
    bool found=false;   //flag when the value is found
    int first=0,middle,last=SIZE-1;  //First, middle, and last positions 
                                            //of the array
    
    //Input or initialize values Here
    cout<<"Enter this weeks winning numbers ";
    cin>>num;
    while (!found&&first<=last){
        middle=(first+last)/2; 
        if (array[middle]==num){
            found=true;
        }
        else if (array[middle]>num)last=middle-1;
        else first=middle+1;
    }
    if (found==true){
        cout<<"Congratulations you won the lottery!!!"<<endl;
    }
    else if (found==false)cout<<"Your number combinations did not match the"
            " winning lottery numbers"<<endl;
    //Exit
        }break;
    }
    cout<<"Would you like to see another problem? (y or n)"<<endl;
    cin>>cont;
    }while (cont=='y');
    
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

void dsLarge(const int numbrs[],int size,int m){
    for (int i=0;i<size;i++){
        if (m<numbrs[i]){
            cout<<numbrs[i]<<" ";
        }
    }
    cout<<"Are all larger than n from the array"<<endl;
}
