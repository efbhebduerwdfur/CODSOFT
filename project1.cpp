#include <iostream>
using namespace std;

int main() {
    int num = rand() % 100 + 1;
    int guess;

         std::cout<<"Guess the number from 1 to 100"<<std::endl;
          std::cout<< "guess any num";

    while (true) {
           std::cout<<"Your guess: ";
            std::cin>>guess;

        if (guess==num) {
            std::cout<<"You guessed the correct number";
            break;
        } 
        else if (guess<num) {
            std::cout<<"this is bit low ";
        } 
        else {
            std::cout<<"too high ";
        }
    }

}

