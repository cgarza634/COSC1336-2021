#include <iostream>

int main () {

    int intNumberOne = 0;
    int intNumberTwo = 0;
    double Largest;
    double Smallest;
    int intSum;
    int intDifference = 0;
    int intProduct;
    int intRatio = 0;

//user input
    std::cout << "Please enter one number " << std::endl;
    std::cin >> intNumberOne;
    std::cout << "Please enter a second number " << std::endl;
    std::cin >> intNumberTwo;

//deciding which is larger or smaller
    if (intNumberOne > intNumberTwo) {
        Largest = intNumberOne;
        std::cout << intNumberOne << " is the Larger Number and " << intNumberTwo << " is the smaller Number " << std::endl;
    } else {
        Largest = intNumberTwo;
        std::cout << intNumberTwo << " is the Larger Number and " << intNumberOne << " is the smaller Number " << std::endl;
    }

//The Math
    intSum = intNumberOne + intNumberTwo;
    intDifference = intNumberOne - intNumberTwo;
    intProduct = intNumberOne * intNumberTwo;
    //intRatio = (( intNumberOne / intNumberTwo) % 5.);

//Outputting the Math
    std::cout << intSum << " is the sum of the two numbers " << std::endl;
    std::cout << intDifference << " is the difference between the two numbers " << std::endl;
    std::cout << intProduct << " is the Product of the two numbers " << std::endl;
    //std::cout << "The Ratio of the Numbers is " << intRatio << std::endl;
    
    return 0;
}