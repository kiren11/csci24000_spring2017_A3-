// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include "Player.h"

//constructor
Player::Player() {

}

//deconstructor
Player::~Player()
{

}

//setters and getters to retrieve private nm
void Player::setNum(int num) {
  num = number;
}

int Player::getNum() {
  return number;
}

//function to determine if Player 1 hit or missed
int Player::shootBall1(int randNum) {
    if (randNum == 1){
      std::cout<<"Hit shot!"<<std::endl;
    } else {
      std::cout<<"Missed shot!"<<std::endl;
    }

}
//function to determine if Player 2 hit or missed
int Player::shootBall2(int randNum2) {
  if (randNum2 == 1){
    std::cout<<"Hit shot!"<<std::endl;
  } else {
    std::cout<<"Missed shot!"<<std::endl;
  }

}
