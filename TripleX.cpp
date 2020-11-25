#include <iostream>

//this is the main function that executes the game code
int main()
{ 
  //Prints welcome messages to the terminal
  std::cout << "Quickly!  The magnetic seals are failing, we are venting oxygen into space!"; 
  std::cout<< std::endl; 
  std::cout << "Enter the correct codes to engage emergency hatches!";

  //3 number codes
  const int CodeA = 4;
  const int CodeB = 2; 
  const int CodeC = 1; 

  const int CodeSum = CodeA + CodeB + CodeC;  
  const int CodeProduct = CodeA * CodeB * CodeC;

  std::cout << std::endl; 
  std::cout << "There are 3 numbers in each code" << std::endl; 
  std::cout << "The codes add up to " << CodeSum << std::endl; 
  std::cout << "The codes multiply to give " << CodeProduct << std::endl;  

  int GuessA, GuessB, GuessC; 
  std::cin >> GuessA;
  std::cin >> GuessB; 
  std::cin >> GuessC;  
   

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC; 
  

  if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
  {
    std::cout << "You Win!! ";
  } 
  else 
  {
    std::cout << "The seals have broken we arrarhhrhaaaaa!.....";
  }


  return 0; 
}