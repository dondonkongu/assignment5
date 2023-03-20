#include "Question.h"

Question::Question(std::string question, std::string answers[4], int correctAnswer)
    : m_question(question), m_correctAnswer(correctAnswer)
{
    for(int i = 0; i < 4; ++i) {
        m_answers[i] = answers[i];
    }
}

std::string Question::getQuestion() {
    return m_question;
}

void Question::setQuestion(std::string question) {
    m_question = question;
}

std::string Question::getAnswer(int index) {
    return m_answers[index];
}

void Question::setAnswer(int index, std::string answer) {
    m_answers[index] = answer;
}

int Question::getCorrectAnswer() {
    return m_correctAnswer;
}

void Question::setCorrectAnswer(int correctAnswer) {
    m_correctAnswer = correctAnswer;
}
