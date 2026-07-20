#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char playAgain;

    cout << "=====================================\n";
    cout << "      NUMBER GUESSING GAME\n";
    cout << "=====================================\n";

    // Seed the random number generator
    srand(time(0));

    do
    {
        int secretNumber = rand() % 100 + 1; // Number between 1 and 100
        int guess;
        int attempts = 0;

        cout << "\nI have chosen a number between 1 and 100.\n";
        cout << "Can you guess it?\n";

        do
        {
            cout << "\nEnter your guess: ";
            cin >> guess;

            attempts++;

            if (guess < secretNumber)
            {
                cout << "Too low! Try again.\n";
            }
            else if (guess > secretNumber)
            {
                cout << "Too high! Try again.\n";
            }
            else
            {
                cout << "\nCongratulations! You guessed the number!\n";
                cout << "The number was: " << secretNumber << endl;
                cout << "Number of attempts: " << attempts << endl;
            }

        } while (guess != secretNumber);

        cout << "\nWould you like to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\nThanks for playing! Goodbye!\n";

    return 0;
}