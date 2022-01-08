#include <iostream>
#include <math.h>
#include <time.h>

int main(){

std::string Hat[4] = {"gryffindor", "hefflepuff", "ravenclaw", "slytherin"};

int Rank[4] = {0, 0, 0, 0}; //Keeps track of score when a vote is given.
int z = Rank[0]; // Is used in the for loop to tell which house is going to be used.
int count, count2, count3, count4; // Questions that will be asked
int hold;
std::cout << "The Sorting Hat Quiz!\n" << "____________\n"; //The Questions 
  std::cout << "Q1) When I'm dead, I want people to remember me as:" << "\n" << "1) The Good \n 2) The Great \n 3) The Wise \n 4) The Bold \n";
  std::cin >> count;
    switch (count){
    case(1):
    Rank[0] += 1;
    break;
    case(2):
    Rank[1] += 1;
    break;
    case(3):
    Rank[2] += 1;
    break;
    case(4):
    Rank[3] += 1;
    break;
    }

  std::cout << "Q2) Dawn or Dusk?\n 1) Dawn\n 2) Dusk" << "\n";
      std::cin >> count2;
      switch (count2){
      case(1):
      Rank[0] += 1;
      Rank[1] += 1;
      break;
      case(2):
      Rank[2] += 1;
      Rank[3] += 1;
      }
      std::cout << "Q3) Which kind of instrument most pleases your ear?\n 1) The violin\n 2) The trumpet\n 3) The piano\n 4) The drum" << "\n";
      std::cin >> count3;
      switch (count3){
      case(1):
      Rank[0] += 1;
      break;
      case(2):
      Rank[1] += 1;
      break;
      case(3):
      Rank[2] += 1;
      break;
      case(4):
      Rank[3] += 1;
      break;
      }
      std::cout << "Q4) Which road tempts you most?\n 1) The wide, sunny grassy lane 2) The narrow, dark, lantern-lit alley\n 3) The twisting, leaf-strewn path through woods\n 4) The cobbled street lined (ancient buildings)" << "\n";
      std::cin >> count4;
      switch (count4){
      case(1):
      Rank[0] += 1;
      break;
      case(2):
      Rank[1] += 1;
      break;
      case(3):
      Rank[2] += 1;
      break;
      case(4):
      Rank[3] += 1;
      break;
      } 
/* Debugging
for(int x = 0; x < 4; x++){
  std::cout << Rank[x] << "\n";
}
*/

//For loop that checks to see what was the highest score.
for (int y = 0; y < sizeof(Rank)/sizeof(Rank[0]); y++){
  
  if (z >= Rank[y]){
    /* Debugging
    std::cout << "\n" <<"--------" << "\n";
    std::cout << "first" << "\n";
    */
    }
  else{
     /* Debugging
    std::cout << "\n" <<"--------" << "\n";
    std::cout << "Second";
    */
    z = Rank[y];
    hold = y;
    
  }
}

// 'z' is the highest score and is used to pick which house should be picked.
std::cout << Hat[hold];
}
