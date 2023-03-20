#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class Question {
private:
    std::string m_question;
    std::string m_answers[4];
    int m_correctAnswer;
public:
    Question(std::string question, std::string answers[4], int correctAnswer);
    std::string getQuestion();
    void setQuestion(std::string question);
    std::string getAnswer(int index);
    void setAnswer(int index, std::string answer);
    int getCorrectAnswer();
    void setCorrectAnswer(int correctAnswer);
};

#endif // QUESTION_H
