#include <iostream>
using namespace std;

// Function to ask a question
int askQuestion(string question, string op1, string op2, string op3, string op4, char correctAnswer)
{
    char answer;

    cout << "\n" << question << endl;
    cout << "A. " << op1 << endl;
    cout << "B. " << op2 << endl;
    cout << "C. " << op3 << endl;
    cout << "D. " << op4 << endl;

    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;

    answer = toupper(answer);

    if (answer == correctAnswer)
    {
        cout << "Correct!\n";
        return 1;
    }
    else
    {
        cout << "Wrong! Correct Answer is " << correctAnswer << endl;
        return 0;
    }
}

int main()
{
    int score = 0;

    cout << "==================================" << endl;
    cout << "      C++ QUIZ GAME" << endl;
    cout << "==================================" << endl;

    score += askQuestion(
        "1. Which language is used for system programming?",
        "Python", "C++", "HTML", "CSS", 'B');

    score += askQuestion(
        "2. Which symbol is used for comments in C++?",
        "//", "##", "/*", "<!--", 'A');

    score += askQuestion(
        "3. Who developed C++?",
        "James Gosling", "Dennis Ritchie", "Bjarne Stroustrup", "Guido van Rossum", 'C');

    score += askQuestion(
        "4. Which header file is used for input/output?",
        "<math.h>", "<stdio.h>", "<iostream>", "<string>", 'C');

    score += askQuestion(
        "5. Which loop executes at least once?",
        "for", "while", "do-while", "foreach", 'C');

    cout << "\n==================================" << endl;
    cout << "Quiz Completed!" << endl;
    cout << "Your Score: " << score << " / 5" << endl;

    if(score == 5)
        cout << "Excellent!" << endl;
    else if(score >= 3)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}