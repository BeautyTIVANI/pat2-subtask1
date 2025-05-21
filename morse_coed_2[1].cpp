#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   
    char letters[] = {
        'A','B','C','D','E','F','G','H','I','J',
        'K','L','M','N','O','P','Q','R','S','T',
        'U','V','W','X','Y','Z'
    };

    
    string morse[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };

    string message;
    cout << "Enter a message in English (A-Z Characters only): ";
    getline(cin, message);

    cout << "\nOutput Morse code:\n";
    string fullMorse = "";

    for (char c : message) {
        if (c == ' ') {
            fullMorse += "   "; 
            continue;
        }

        c = toupper(c);
        for (int i = 0; i < 26; i++) {
            if (letters[i] == c) {
                cout << c << ": " << morse[i] << endl;
                fullMorse += morse[i] + "   ";
                break;
            }
        }
    }

    cout << "\nFull Morse code with spaces:\n" << fullMorse << endl;

    return 0;
}
