//Write a program to Create quiz application.

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "----- Welcome to the Quiz! -----" << endl;
    cout << "Answer by entering 1, 2, 3, or 4.\n" << endl;

    // Question 1
    cout << "Q1. What is the capital of France?" << endl;
    cout << "1. Berlin  2. Madrid  3. Paris  4. Rome" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 3) {
        cout << "Correct!\n" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Paris.\n" << endl;
    }

    // Question 2
    cout << "Q2. Raey is the reverse spelling of which word?" << endl;
    cout << "1. building  2. year  3. broken  4. already" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct!\n" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Mars.\n" << endl;
    }

    // Question 3
    cout << "Q3. What is 5 + 20?" << endl;
    cout << "1. 10  2. 14  3. 25  4. 15" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 3) {
        cout << "Correct!\n" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is 12.\n" << endl;
    }

    // Question 4
    cout << "Q4. The Rattlesnake is a type of what animal?" << endl;
    cout << "1. Fish  2. Snake  3. Insect  4. Mammal" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct!\n" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is William Shakespeare.\n" << endl;
    }

    // Question 5
    cout << "Q5. '_______ Gandhi' well known figure from history?" << endl;
    cout << "1. Mahatma Gandhi  2. Leonardo Da Vinci  3. Thomas Jefferson  4. Christopher Columbus" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 1) {
        cout << "Correct!\n" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Pacific.\n" << endl;
    }

    // Show final score
    cout << "===== Quiz Finished! =====" << endl;
    cout << "Your final score is: " << score << " out of 5" << endl;

    return 0;
}