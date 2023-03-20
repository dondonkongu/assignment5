#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Question.h"

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Create an array of 10 Question objects
    Question questions[10] = {
        Question("What is the capital of France?", {"Paris", "London", "New York", "Madrid"}, 1),
        Question("What is the largest ocean?", {"Atlantic Ocean", "Indian Ocean", "Arctic Ocean", "Pacific Ocean"}, 4),
        Question("What is the largest country by area?", {"China", "Russia", "USA", "Brazil"},2),
        Question("What is the smallest continent by land area?", {"Africa", "Europe", "Australia", "North America"}, 3),
        Question("What planet is known as the 'Red Planet'?", {"Mars", "Venus", "Jupiter", "Mercury"}, 1),
        Question("What is the tallest mammal?", {"Horse", "Giraffe", "Elephant", "Camel"}, 2),
        Question("What is the smallest bird in the world?", {"Hummingbird", "Penguin", "Ostrich", "Chicken"}, 1),
        Question("What is the hottest continent on Earth?", {"Africa", "Asia", "South America", "Antarctica"}, 1),
        Question("What is the longest river in the world?", {"Nile", "Amazon", "Yangtze", "Danube"}, 1),
        Question("What is the largest desert in the world?", {"Gobi Desert", "Sahara Desert", "Mojave Desert", "Kalahari Desert"}, 2)
    };

    int player1Score = 0;
    int player2Score = 0;
    int currentQuestion = 0;

    // Loop through each player's turn
    for(int player = 1; player <= 2; ++player) {
        std::cout << "Player " << player << "'s turn:" << std::endl;
        // Loop through each question
        for(int questionNum = 1; questionNum <= 5; ++questionNum) {
            Question currentQuestion = questions[rand() % 10];

            std::cout << currentQuestion.getQuestion() << std::endl;

            for(int i = 0; i < 4; ++i) {
                std::cout << i+1 << ") " << currentQuestion.getAnswer(i) << std::endl;
            }

            int answer;
            std::cin >> answer;

            // Check if the answer is correct
            if(answer == currentQuestion.getCorrectAnswer()) {
                std::cout << "Correct!" << std::endl;
                if(player == 1) {
                    ++player1Score;
                }
                else {
                    ++player2Score;
                }
            }
            else {
                std::cout << "Wrong!" << std::endl;
            }
        }
    }

    // Print the final scores
    std::cout << "Player 1: " << player1Score << " points" << std::endl;
    std::cout << "Player 2: " << player2Score << " points" << std::endl;

    // Determine the winner
    if(player1Score > player2Score) {
        std::cout << "Player 1 is the winner!" << std::endl;
    }
    else if(player2Score > player1Score) {
        std::cout << "Player 2 is the winner!" << std::endl;
    }
    else {
        std::cout << "It's a tie!" << std::endl;
    }

    return 0;
}
