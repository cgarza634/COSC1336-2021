#include <iostream>

int main () {

int intNumber = 1;
bool prime;

while (intNumber <= 10000) 
{
    prime = true;

    for (int i = 2; i < intNumber; i++){
        if (intNumber % i == 0 ) {
            prime = false;
            break;
        }
    }

    if (prime == true){
        std::cout << intNumber << std::endl;
    }

    intNumber++;
}

}
