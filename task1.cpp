/* Task 1 - Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void checkWon(int user, int ans)
{
    int tries = 1;
    while (ans != user)
    {
        tries++;
        if (user > ans)
        {
            cout << "Your Guess  :  " << user << "\nTOO HIGH!! Try Again\n\n";
        }
        else
        {
            cout << "Your Guess  :  " << user << "\ntoo low! Try Again\n\n";
        }
        cout << "Guess Another number  :  ";
        cin >> user;
    }
    cout << "Great Job!! \nYou guessed the answer in " << tries << " tries" << endl;
}
int main()
{
    srand(time(0));
    int userInput;
    char playAgain;

    cout << "\t\t\t\t\t\t------------------------------------" << endl;
    cout << "\t\t\t\t\t\tWelcome To The Number Guessing Game" << endl;
    cout << "\t\t\t\t\t\t------------------------------------" << endl;
    do
    {
        int correct = rand() % 100 + 1;
        // cout << correct;
        cout << "\nWhat's your Guess (number between 1 and 100) ? :  ";
        cin >> userInput;
        checkWon(userInput, correct);
        cout << "\nDo you wish to play again (y/n) ?  ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
