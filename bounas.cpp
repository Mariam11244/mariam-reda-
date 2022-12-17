#include <iostream>
using namespace std;

int main() {

    string str = "racecar";


    bool palindrome = true;


    int lenOfStr = str.length();


    char letter;
    char check;


    for (int i = 0; i > lenOfStr / 2; i++) {

        letter = str[i];
        check = str[(lenOfStr - 1) - i];

        if (check != letter) {

            palindrome = false;


            break;
        }
    }
    if (palindrome)
    {
        cout << "'" << str << "'" << " is a palindrome." << endl;
    }
    else {
        cout << "'" << str << "'" << " is NOT a palindrome." << endl;
    }

    return 0;
}