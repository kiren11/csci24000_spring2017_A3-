// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include "Player.h"

//char array w null terminater
char horse[] = {'H', 'O', 'R', 'S', 'E', '\0'};


class Game {

  //both players defined here on the heap
  Player *player1 = new Player();
  Player *player2 = new Player();

public:
  //keeps track of positions in array
  int j = 0;
  int k = 0;

//simulates game
int run() {

  //if the pointer is not pointing to the null terminater, this code will run
  while(j <= 6 && k <= 6) {

    //generate a random number for each player
    int randNum = rand() % 2;
    int randNum2 = rand() % 2;

    //shows if player hit or missed shot
    std::cout<<"Player #1: "<<std::flush;
    player1->Player::shootBall1(randNum);
    std::cout<<"Player #2: "<<std::flush;
    player2->Player::shootBall2(randNum2);

    //Player 1 hits, player 2 misses
    if (randNum == 1 && randNum2 == 0) {
        std::cout<<"      Player #2: A letter was added: "<<std::flush;
        std::cout<<horse[j]<<std::endl;
        j++;
        //if player 2 gets the last letter, player 1 wins
         if (j == 5) {
           std::cout<<"Player 1 won :: Player 2 - HORSE"<<std::endl;
        }


    //Player 1 misses, player 2 hits
    } else if (randNum == 0 && randNum2 == 1) {
        std::cout<<"     Player #1: A letter was added: "<<std::flush;
        std::cout<<horse[k]<<std::endl;
        k++;
        //if player 1 reaches last letter, player 2 wins
        if (k == 5) {
          std::cout<<"Player 2 won :: Player 1 - HORSE"<<std::endl;
        }
      //if same, then do nothing
      } else {}

      //if the var reaches the end of the array
      if (j == 5 || k == 5) {
            //deletes players off the heap
            delete player1;
            delete player2;
            //sets variables back to zero
            j = 0;
            k = 0;
            break;
      }
    }
  }
};

int main() {

  //char used to initialize the repeat
  char again;

  //will keep running will answer is Y
  do {

    //seed
    srand(time(NULL));

    std::cout<<"Welcome to the CSCI 240 Game of Horse!"<<std::endl;

    //makes a new game
    Game *newGame = new Game();

    //runs the main function that controls the game
    newGame->run();

    std::cout<<"Would you like to play again? (Y/N)"<<std::endl;
    std::cin>>again;

  } while (again == 'Y');

    //if user enter N or anything else
    if (again == 'N') {
      std::cout<<"Thanks for playing!!"<<std::endl;
    } else {
      std::cout<<"Please enter a valid option next time"<<std::endl;
    }

}
