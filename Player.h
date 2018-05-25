// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

class Player {

  public:

    //Constructor
    Player();

    //Destructor
    ~Player();

    //Member Methods
    int shootBall1(int);

    int shootBall2(int);

    //getters and setters for number
    void setNum(int);
    int getNum();

  private:
    int number;

};

#endif //_PLAYER_H_
