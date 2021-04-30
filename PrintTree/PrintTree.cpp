// Christmas Tree Function Program
// Cristian Garza 04 22 21
#include <iostream>

void printTree(int intpHeight){
    int intNumberofLeaves = 1;
    for(int intBranches = 1; intBranches < intpHeight; intBranches++) {
        //add spaces before printing the branches
        for(int intCountSpace = (intpHeight - intBranches); intCountSpace > 0; intCountSpace--){
            std::cout << " ";
        }
        //print out the number of leaves based on the branch
        for(int intCountLeaves = 1; intCountLeaves <= intNumberofLeaves; intCountLeaves++){
            std::cout << "*";
        }
        std::cout << std::endl;
        //add leaves for the next branch
        intNumberofLeaves+=2;
        }
    for(int intCountSpace = (intpHeight - 1); intCountSpace > 0; intCountSpace--){
            std::cout << " " << std::endl;
    }
    std::cout << "*" << std::endl;
}

int main (){

    int intNumberofLine = 5;

    std::cout << std::endl;

    printTree(intNumberofLine);

    std::cout << std::endl;

    printTree(intNumberofLine + 2);


    return 0;
}
