/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on March 15, 2018, 12:30 PM
 * Purpose: Blackjack
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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int comp,player; //Keep the total of the players and computers hand
    string pname; //Name of the player
    char hit;   //If the player wants to take another card or not
    char cont; //If the player wants another hand
    int pcard1,pcard2,ccard1,ccard2; //Value of the cards pulled for comp and player
    int pscore,cscore; //holds the total score of hands
    int newcard;    //Value of the new card
    int newamt=0;     //Adds the value for the sum of new cards drawn
    int Ace;    //User choice if they want they're ace to be a 1 or 11
    int firAce; //The first ace 
    
    //Shuffle the deck of cards
    int random;
    srand(static_cast<unsigned int>(time(0)));
    ofstream deckFile;
    deckFile.open("Deck.doc");
    for(int count=1;count<=52;count++){        
       random=rand()%10+1;
       deckFile<<random<<endl;
    }
    deckFile.close();
    //Open the file to read 
    ifstream readfile;
    readfile.open("Deck.doc");
    
    //Input and start game
    cout<<"This is blackjack between you and the computer(the dealer)"<<endl;
    cout<<"1=Ace,Jack,Queen,King==10"<<endl;
    cout<<"Please enter your name ";
    cin>>pname;
    cout<<"The computer will now deal you two cards"<<endl;
    do{
        //Deal the cards to comp and player
        readfile>>pcard1;
        readfile>>pcard2;
        readfile>>ccard1;
        readfile>>ccard2;
        cout<<"Your cards are "<<pcard1<<setw(4)<<pcard2<<endl;
        cout<<"The dealers face up card is "<<ccard2<<endl;
        if (ccard1==1||ccard2==1){
            int randAce;
            randAce=rand()%2+1;
            if (randAce==1){
                comp+=1;
            }
            else {
                comp+=11;
            }
        }
        
        //Ask the user if they want their ace to be a 1 or 11
        if (pcard1==1||pcard2==1){
            cout<<"Would you like this Ace to be a 1 or 11?"<<endl;
            cin>>firAce;
            if (firAce==1){
                player+=1;
            }
            else if (firAce==11){
                player+=11;
            }
        }
        
        //Ask the user if they want another card
        do{
            cout<<"Would you like to take another card? (y or n)"<<endl;
            cin>>hit;
            if (hit=='y'){
                readfile>>newcard;
                cout<<newcard<<endl;
                if (newcard==1){
                    cout<<"Would you like this Ace to be a 1 or 11?"<<endl;
                    cin>>Ace;
                    if (Ace==1){
                        newamt+=1;
                    }
                    else if (Ace==11){
                        newamt+=11;
                    }   
                }
                else{
                    newamt+=newcard;
                }
            }
        }while (hit=='y');
        
        //Sum up player and comp cards
        if (player==1||player==11){
            if (pcard1==1){
                player+=pcard2+newamt;
            }
            else if (pcard2==1){
                player+=pcard1+newamt;
            }
        }
        else {
            player=pcard1+pcard2+newamt;
        }
        if (comp==1||comp==11){
            if (ccard1==1){
                comp+=ccard2;
            }
            else if (ccard2==1){
                comp+=ccard1;
            }
        }
        else {
            comp=ccard1+ccard2;
        }
        newamt=0;
        if (player<21&&comp<21){
            if (player>comp){
                cout<<"Congratulations you had "<<player<<" over the dealers "
                        <<comp<<" "<<pname<<" won that hand!"<<endl;
                pscore++;
            }
            else if (comp>player){
                cout<<"The dealer won that hand with "<<comp<<" over your "
                        <<player<<"!"<<endl;
                cscore++;
            }
        }
        else if (player==comp){
            cout<<"You and the dealer pushed with "<<player<<endl;
        }
        else if (player>21){
            cout<<"You busted at "<<player<<" , the dealer wins!"<<endl;
            cscore++;
        }
        else if (comp>21){
            cout<<"The dealer busted at "<<comp<<" , you win!"<<endl;
            pscore++;
        }
        else if (player>21&&comp>21){
            cout<<"You and the dealer busted, it's a push"<<endl;
        }
        //Reset the total of player and the computer
        comp=0;
        player=0;
        //Ask if the user wants another hand
        cout<<"Would you like to play another hand? (y or n) ";
        cin>>cont;
    }while (cont=='y');
   
    //Output total amount of hands won by the user and computer
    cout<<"You won "<<pscore<<" hands!"<<endl;
    cout<<"The computer won "<<cscore<<endl;
    readfile.close();
    //Exit
    return 0;
}
