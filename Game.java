// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

import java.io.*;
import java.util.Random;
import java.util.Scanner;

public class Game {

    //char array w null terminater
    public char[] horse = {'H', 'O', 'R', 'S', 'E', '\0'};

    //used to keep track of positions in array
    public int j = 0;
    public int k = 0;

    //creates 2 new players on the heap
    Player player1 = new Player();
    Player player2 = new Player();


public void run() {
  while (j <= 6 && k <= 6) {

    //generates a random number
    Random rand1 = new Random();
    Random rand2 = new Random();

    //generates random number for each player
    int randNum = rand1.nextInt(2 - 0) + 0;
    int randNum2 = rand2.nextInt(2 - 0) + 0;

    //simulates shooting ball, to see if they hit or miss
    System.out.print("Player #1: ");
    player1.shootBall1(randNum);
    System.out.print("Player #2: ");
    player2.shootBall2(randNum2);

      //if player 1 hits, and player 2 misses
      if (randNum == 1 && randNum2 == 0) {
            System.out.print("      Player #2: A letter was added: ");
            System.out.println(horse[j]);
            j++;
            //if player 2 gets the last letter, player 1 wins
             if (j == 5) {
               System.out.println("Player 1 won :: Player 2 - HORSE");
            }

      //if player 1 misses, and player 2 hits
      } else if (randNum == 0 && randNum2 == 1) {
              System.out.print("     Player #1: A letter was added: ");
              System.out.println(horse[k]);
              k++;
              //if player 1 reaches last letter, player 2 wins
              if (k == 5) {
                System.out.println("Player 2 won :: Player 1 - HORSE");
              }

      //else if both are the same then do nothing
      } else  {}

      //if the var reaches the end of the array
      if (j == 5 || k == 5) {

          //sets variables back to zero
          j = 0;
          k = 0;
          break; //ends ball shooting simulation
      }
    }
  }

//start of the main
public static void main (String args[]) {

  //char used to initialize the repeat
  String again = "";

  //will keep running will answer is Y
  do {

     //used to take in input
     Scanner scan = new Scanner(System.in);

     System.out.println("Welcome to the 240 Game of Horse \n");

     //generates a new game
     Game newGame = new Game();

     //game will be run by calling run method
     newGame.run();

       //asks user if they want to play again
       //takes input as stores it as var again
       System.out.println("Would you like to play again? (Y/N) ");
       again = scan.nextLine();

     } while (again.equalsIgnoreCase("Y")); //will keep going while again is = to Y

     //if the user enters 'N' or an invalid char
     if (again.equalsIgnoreCase("N")) {
       System.out.println("Thank you for playing!");
     } else {
       System.out.println("Please enter a valid character, either Y or N.");
     }
   }
}
