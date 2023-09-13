#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> myVector;

    while (true) {
        string userInput;
        cout << "Enter a word (or 'q' to exit): ";
        getline(cin, userInput);  // Read a line, including spaces

        // Check if the user wants to exit the loop
        if (userInput == "q") {
            break;
        }

        // Add the user input to the vector
        myVector.push_back(userInput);
    }

    cout << "Your vector: ";
    for (const string& element : myVector) {
        cout <<'\n'<< element << " ";
    }
    cout << endl;

    return 0;
}

