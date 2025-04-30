#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

string Reverse(const string& str) {
    string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}
string CapitaliseSecondLetters(string str) {
    bool newWord = true;
    int wordPos = 0;
    for(char &c : str) {
        if (newWord) {
            wordPos = 0;
            newWord = false;
        }
        if (c == ' ') {
            newWord = true;
        }
        else {
            wordPos++;
            if (wordPos == 2 && isalpha(c)) {
                c = toupper(c);
            }
        }
    }
    return str;
}
int main() {
    ifstream inputFile("textfile.txt");
    if (!inputFile.is_open()) {
        cerr << "error: could not open the file." << endl;
        return 1;
    }
    string fileData;
    getline(inputFile, fileData);
    inputFile.close();
    cout << "original content: " << fileData << endl << endl;
    int vowelCount = 0;
    for (char c : fileData) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == '0' || c == 'u') {
            vowelCount++;
        }
    }
    cout << "number of vowels: " << vowelCount << endl;
    int wordCount = 0;
    bool inWord = false;
    for (char c : fileData) {
        if (isalpha(c)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }
    cout << "number of words: " << wordCount << endl << endl;
    string reversedStr = Reverse(fileData);
    cout << "Reversed content: " << reversedStr << endl << endl;
    string capitalisedStr = CapitaliseSecondLetters(fileData);
    cout << "Capitalised Second Letters: " << capitalisedStr << endl;
    return 0;
}