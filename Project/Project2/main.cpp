/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on May 26, 2018, 12:30 PM
 * Purpose: Project 2 - Blackjack V2 
 */

//System Libraries Here
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string getName();       //Function to get the name of the user
void wrtFile();         //Function to write card values to a file/making deck
int newCard();         //Function to give new card to the player
int getpSum(int,int[]);//Function to get the sum of the user hand

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int comp=0,player=0; //Keep the total value of the both players hands
    string pname; //Name of the player
    char cont; //Choice if the player wants another hand and continue playing
    int newcard;        //New card for the computer
    int pscore,cscore; //holds the total score of hands won
    int Ace; //The ace in the users hand
    int temp;   //Temporary to add to the player/computer total hand
    const int SIZE=2;       //Size of the two arrays
    int phand[SIZE];        //Parallel array to hold the hand of the player
    int chand[SIZE];        //Parallel array to hold the hand of the comp
    int push=0;               //How many times player and comp can push
    
    //Shuffle the deck and write to the file
    wrtFile();
    
    //Open the file to read 
    ifstream rdfile;
    rdfile.open("BlackjackDeck.doc");   //Name of the document
        
    //Input and start game
    cout<<"This is blackjack between you and the computer(the dealer)"<<endl;
    cout<<"1=Ace,Jack,Queen,King==10"<<endl;
    pname=getName();        //Go to Function getname
    cout<<"DEAL!"<<endl;        //Start the game
    cout<<endl;
    do{ 
        //Deal the cards to comp and player
        rdfile>>phand[0];       //reading from BlackjackDeck doc
        rdfile>>phand[1];
        rdfile>>chand[0];
        rdfile>>chand[1];
        cout<<"Your cards are: "<<phand[0]<<setw(3)<<phand[1]<<endl;
        cout<<"The dealers face up card is: "<<chand[1]<<endl;
        cout<<endl;
        
        //If one of the computers cards is an Ace(1)
        if (chand[1]==1){
            chand[1]=11;
        }
        else if (chand[0]==1){
            chand[0]=11;
        }
        
        //Sum the computers cards
        comp=chand[0]+chand[1];
        
        //Give the computer another card if its sum is less than 16
        cout<<"The dealer goes first"<<endl;
            while (comp<16){
                rdfile>>newcard;
                cout<<"The dealer drew a "<<newcard<<endl;
                if (newcard==1){
                    if ((comp)<11){
                        newcard=11;
                    }
                }
                comp+=newcard;
            }
        cout<<"The dealers turn is over"<<endl;
        cout<<endl;
        
        //Ask the user if they want their ace to be a 1 or 11
        if (phand[0]==1||phand[1]==1){
            cout<<"Would you like your Ace to be a 1 or 11? ";
            cin>>Ace;
            while (!(Ace==1)&&!(Ace==11)){
                cout<<"Enter either 1 or 11: ";
                cin>>Ace;
            }
            Ace=1?player=11:player=1;
        }
        
        //Ask the user if they want another card
        temp=newCard();
        player+=temp;
        
        //Sum up player cards
        player=getpSum(player,phand);
        
        //Output results
        cout<<"The dealers face down card was a "<<chand[0]<<endl;
        if (player<=21&&comp<=21){
            if (player>comp){
                if (player==21){
                    cout<<"Blackjack!! You won!"<<endl;
                    pscore++;
                }
                else{
                    cout<<"Congratulations you had "<<player<<" over the dealers "
                        <<comp<<", "<<pname<<" won that hand!"<<endl;
                    pscore++;
                }
            }
            else if (comp>player){
                if (comp==21){
                    cout<<"Blackjack!! The dealer won!"<<endl;
                    cscore++;
                }
                else{
                    cout<<"The dealer won that hand with "<<comp<<" over your "
                        <<player<<"!"<<endl;
                    cscore++;
                }
            }
            else if (player==comp){
                cout<<"You and the dealer pushed with "<<player<<endl;
                push++;
            }  
        }
        else if (player>21&&comp<=21){
            cout<<"You busted at "<<player<<", the dealer wins!"<<endl;
            cscore++;
        }
        else if (comp>21&&player<=21){
            cout<<"The dealer busted at "<<comp<<", you win!"<<endl;
            pscore++;
        }
        else if (player>=21&&comp>=21){
            cout<<"You busted at "<<player<<", and the dealer busted at "<<
                    comp<<", it's a push"<<endl;
            push++;
        }
        
        //Reset the total of player and the computer
        comp=0;
        player=0;
        
        //Ask if the user wants another hand
        cout<<"Would you like to play another hand? (y or n) ";
        cin>>cont;
        cout<<"----------------------------------------------"<<endl;
    }while (cont=='y');
   
    //Output total amount of hands won by the user and computer
    cout<<"You won "<<pscore<<" hands"<<endl;
    cout<<"The computer won "<<cscore<<" hands, and pushed "<<push<<endl;
    rdfile.close();
    
    //Exit
    return 0;
}
string getName(){
    //Get the name of the user
    string name;        //Temporary variable to hold the users name
    cout<<"What is your name ";
    cin>>name;
    return name;
}
void wrtFile(){
    //Shuffle the deck of cards
    int random;    //Random number to write to the file as the card number
    ofstream dckFile;
    dckFile.open("BlackjackDeck.doc");
    
    //Read 52 random numbers into a file
    for(int count=0;count<52;count++){        
       random=rand()%10+1;
       dckFile<<random<<endl;
    }
    dckFile.close();
}
int newCard(){
    int newcard;    //Value of the new card for the user
    char hit;   //Choice the player wants to take another card or not
    ifstream rdFile;
    int Ace;        //Choice whether the user wants a 1 or 11
    int newamt=0;   
    rdFile.open("BlackjackDeck.doc");
    
    //Ask the user if they want another card
    do{
        cout<<"Would you like to take another card? (y or n) ";
        cin>>hit;
        while(!(hit=='y')&&!(hit=='n')){
            cout<<"Enter either y or n: ";
            cin>>hit;
        }
        if (hit=='y'){
            rdFile>>newcard;
            cout<<"Your new card is: "<<newcard<<endl;
            cout<<endl;
            
            //If the card happens to be an Ace
            if (newcard==1){
                cout<<"Would you like this Ace to be a 1 or 11? ";
                cin>>Ace;
                while(!(Ace==1)&&!(Ace==11)){
                    cout<<"Enter either a 1 or 11: ";
                    cin>>Ace;
                }
                if (Ace==1){
                    newamt+=1;
                }
                else if (Ace==11){
                    newamt+=11;
                }
            }
            else newamt+=newcard;
        }
        Ace=0;
    }while (hit=='y');
    cout<<endl;
    rdFile.close();
    return newamt;
}
int getpSum(int play,int hand[]){
    //Sum up player cards
        if (hand[0]==1||hand[1]==1){
            if (hand[0]==1){
                play+=hand[1];
            }
            else if (hand[1]==1){
                play+=hand[0];
            }
        }
        else {
            play+=(hand[0]+hand[1]);
        }
        return play;
}
