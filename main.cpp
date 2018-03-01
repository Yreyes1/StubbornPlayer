#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int NumberOfGames;
  int Wins = 0;

  cout<<"How many times do you want to play?\n";
  cin>>NumberOfGames;
 
 for(int i = 0;i < NumberOfGames; i++)
 {
    game.newGame();
    game.guessDoorC();
    //cout<<"You have chosen door C\n";
    game.guessDoorC();
    //cout<<"You have chosen door C\n";
   if(game.isWinner())
   {    // cout<<"You win!\n";
        Wins++;
   }
    else
    {
       // cout<<"You lose\n";
    }
    
 }
        
cout<<"You won " <<Wins<< " out of " <<NumberOfGames<< " games. \n";

  return 0;
}
