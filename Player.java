// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

import java.io.*;

public class Player {

      //constructor
      public Player() {}

      //used to store the rand number
      private int num;

      //setters and getters to get private number
      public Player(int num) {
        this.num = num;
      }

      public int getNum() {
        return this.num;
      }

      //function to simulate shooting the ball for each player
      //will return if the player hit or missed the shot
      public void shootBall1(int randNum){
        if (randNum == 1) {
          System.out.println("Hit shot!");
        } else {
          System.out.println("Missed shot!");
        }
      }

      public void shootBall2(int randNum2){
        if (randNum2 == 1) {
          System.out.println("Hit shot!");
        } else {
          System.out.println("Missed shot!");
        }
    }
}
