#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    while(1){
        int guessNumber, randomNumber;

        cout << "Enter your guess between 1 to 5 : ";
        cin >> guessNumber;

        randomNumber = rand()%5;

        if(guessNumber == randomNumber){
            cout << "You have won" << endl << endl;
        }
        else{
            cout << "You have lost" << endl;
            cout << "Random Number : " << randomNumber << endl << endl;
        }
    }
}
