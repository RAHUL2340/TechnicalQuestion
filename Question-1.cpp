//Problem 1: Count occurrences of a given character in a string

#include <iostream>
#include <string>
using namespace std;

int countOccurrences(const string& str, char character) {
    int count = 0;
    for (char c : str) {
        if (c == character) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    char character;

    cout << "Enter a string: ";
    cin >> input;
    cout << "Enter a character to count: ";
    cin >> character;

    int result = countOccurrences(input, character);
    cout << "Occurrences of '" << character << "' in '" << input << "': " << result << endl;

    return 0;
}