#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
/*
MB-213-A
a9 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std ;

int main()
{
 //generation of random numbers
 srand(time(NULL));
 cout << " enter number between 1 and 100"<< endl;

 int numberGuess = rand() % 100 + 1;
//random number between 1 and 100
 int guess=-1;
 int tries = 1;

 while(true)
 {
  
   cout<<"_ _ _ _ _ _ _ _ _ _ "<< endl;
   cout<<"Enter a Guess"<< endl;
   cin >> guess;
 // guess input
   if(guess ==numberGuess)
   {
      break;
   }
  // if correct break
   tries++;
   if(guess < numberGuess)
   {
      cout<<"NUMBER IS LOW"<< endl;
   }
   if(guess >numberGuess )
   {
      cout<<"NUMBER IS HIGH"<<endl;
   }
  // loop if incorrect
 }
  
  cout<< "This is the number you guessed "<< numberGuess<<endl;

  cout<< "Tries take :"<< tries << endl;
 // number guessed and tries taken 
 return 0;


}


 