/*Write a program that calculates a random number from 1 through 100. The program then asks the user to guess the number. If the user guesses too high or too low, the program should output "too high" or "too low" accordingly.

The program must let the user continue to guess until the user correctly guesses the number. Output how many guesses it took the user to guess the correct number.


Note: Use the standard library function to generate the random number: http://en.cppreference.com/w/cpp/numeric/random/rand*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
        srand(time(0));
        int target=rand() % 100 + 1;
        int attempts=0;
        int guess;
        cout<<"Guess the number between 1 to 100: ";
        while(true)
        {
                cin>>guess;
                attempts++;
                if(guess>target) {
                        cout<<"Too high. Try again: ";
                }
                else if(guess<target) {
                        cout<<"Too low. Try again: ";
                }
                else {
                        cout<<"Correct! You guessed it in "<<attempts<<" attempts."<<endl;
                        break;
                }
        }
        return 0;
}
