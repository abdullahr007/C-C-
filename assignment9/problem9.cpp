
#include <iostream>
#include <array>
#include <string>
#include <ctime>

#define wordlist 17
/*
MB-213-A
a9 p9.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


using namespace std ;
array<string, wordlist> words =
{
    "computer",
    "television",
    "keyboard",
    "laptop",
    "mouse",
    "selena",
    "ronaldo",
    "pakistan",
    "drake",
    "please",
    "dualipa",
    "halamadrid",
    "nothing",
    "jacobs",
    "helloworld",
    "rameesha",
    "guessitman"
 };

 bool isVowel(const char letter)
{
    string vowels ="aeiouAEIOU";
    return vowels.find(letter) != string::npos;
}

int main()
{
    // Initialize the seed
    srand(time(0));

    bool running = true;

    // Game variables
    int n_tries = 0;
    string guess;
    string wordToGuess = words[rand() % wordlist];


    cout << "HELLO GUESS THE WORD!!!\n\n";

    // Game loop
    while (running)
    {
        // word with _
        cout << "WORD: ";
        for (unsigned int i = 0; i < wordToGuess.length(); ++i)
        {
            if (isVowel(wordToGuess[i]))
            {
                cout << "_";
                continue;
            }
            cout << wordToGuess[i];
        }
        cout << "\n";

        //input
        getline(cin, guess);
        ++n_tries;

        // If the guess is correct
        if (guess == wordToGuess)
        {
            // Get user desire
            cout   << "You won!!!!!"
                        << n_tries << " tries.\n";
            cout << "Do you want to try it again?(Y/n): ";
            const char answer = getchar();
            getchar(); // catch '\n'

            // Reset the game
            if (tolower(answer) == 'y')
            {
                wordToGuess = words[rand() % wordlist];
                n_tries = 0;
                cout << "\n-----------------------\n";
                cout << "Guess word!!!\n\n";
                continue;
            }

            // Exit the game
            running = false;
            continue;
        }
        // Exit state
        else if(guess == "quit")
        {
             if (n_tries == 1)
                std::cout << "You didn't even try dumbo XD\n";
            else
                std::cout << "YOU COWARD. COME BACK AND GUESS IT!\n";
            running = false;
            continue;
        }
        cout << "WRONG GUESS\n\n-------------------\n";
    }

    getchar();

    return 0;
}