#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

int main() {
   
    char alphabets[] = {
        'A','B','C','D','E','F','G','H','I','J',
        'K','L','M','N','O','P','Q','R','S','T',
        'U','V','W','X','Y','Z'
    };

    string morse[] = {
        ".--", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };

    string input;
    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, input);

    string full_Morse_Code = "";
    
    

    

       for (char ch : input) {
        if (isalpha(ch)) {
            ch = toupper(ch); 
            
            for (int i = 0; i < 26; ++i) {
                    cout << ch << ": " << morse[i] << endl;
                    full_Morse_Code += morse[i] + "   "; 
                if (alphabets[i] == ch) { 
                    break;
                }
            }
        }
        else if (ch == ' ') {
            full_Morse_Code += "      "; 
        }
    }

    cout << "\nFull Morse Code Message:\n" << full_Morse_Code << endl;

    return 0;
}
