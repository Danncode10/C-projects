#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(nullptr));
    const int min_number = 2;
    const int max_number = 10;
    const int num_questions = 5;

    cout << "Welcome to the Multiplication Flashcard Exercise!" << endl;
    cout << "You'll be asked " << num_questions << " multiplication questions." << endl;
    cout << "Let's begin!" << endl << endl;

    int correct_answers = 0;

    for (int i = 0; i < num_questions; ++i) {
        int num1 = min_number + rand() % (max_number - min_number + 1);
        int num2 = min_number + rand() % (max_number - min_number + 1);

        cout << "Question " << i + 1 << ": What is " << num1 << " times " << num2 << "? ";
        
        int user_answer;
        cin >> user_answer;

        if (user_answer == num1 * num2) {
            cout << "Correct!" << endl;
            correct_answers++;
        } else {
            cout << "Incorrect. The correct answer is: " << num1 * num2 << endl;
        }
    }

    cout << endl << "You answered " << correct_answers << " out of " << num_questions << " questions correctly." << endl;

    return 0;
}
