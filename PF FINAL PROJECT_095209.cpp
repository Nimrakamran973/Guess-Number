#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
   srand(static_cast<unsigned int>(time(0))); 
    int secretNumber = rand() % 100 + 1;
    int guess = 0; 
    int previousGuess = 0;
    int attempts = 0;
	cout << "Welcome to the Guess a Number Game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess it!\n";
    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
		 if (guess < secretNumber) {
            if (previousGuess != 0) {
                if (abs(secretNumber-guess)<abs(secretNumber-previousGuess)){
                    cout <<"You're getting closer, but too low!\n";
                } else {
                    cout <<"Too low! Try again.\n";
                }
            } else {
                cout <<"Too low! Try again.\n";
            }
        } else if (guess>secretNumber){
            if (previousGuess!= 0){
                if(abs(secretNumber-guess)<abs(secretNumber-previousGuess)) {
                    cout <<"You're getting closer, but too high!\n";
                } else {
                    cout <<"Too high! Try again.\n";
                }
            } else {
                cout <<"Too high! Try again.\n";
            }
        } else {
            cout << "Congratulations! You've guessed the number " << secretNumber << " in " << attempts << " attempts.\n";
        }
		  previousGuess = guess;
    }
	return 0;
}