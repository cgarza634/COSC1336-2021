#include <iostream>
#include <time.h>
#include <cstdlib>

int main () {

char charuserAnswer; //input for high or low
int intuserNumber; //user number
int intcomputerGuess; //computer guess
int intMin = 1; //minimum of range
int intMax = 100; //maximum of range

do
{
    intuserNumber = 0;
    std::cout << "Please think of a number between 1-100 and I will try to guess it using a series of questions." << std::endl;
    std::cout << "Please input the number you want me to guess (Don't worry I won't cheat)" << std::endl;
    std::cin >> intuserNumber; 
    srand(time(NULL));
    intcomputerGuess = rand() % 100 + 1; //random number generator between 1 and 100
} while(intuserNumber<1||intuserNumber>100); //https://codereview.stackexchange.com/questions/115371/reverse-guess-the-number-program

while (intuserNumber != intcomputerGuess)
{
    intcomputerGuess = rand() % intMax + intMin;

        std::cout << "Is your number higher or lower than " << intcomputerGuess << "?" << std::endl;
        std::cout << "Answer with H for Higher and L for Lower" << std::endl;
        std::cin >> charuserAnswer;
            if (charuserAnswer == 'h')
            {
                intMin = intcomputerGuess;
                intcomputerGuess = rand() % (intMax - intMin) + 1; //https://codereview.stackexchange.com/questions/115371/reverse-guess-the-number-program
            }
            else
            {
                intMax = intcomputerGuess;
                intcomputerGuess = rand() % (intMin - intMax) + 1;
            }

}

    return 0;

}
