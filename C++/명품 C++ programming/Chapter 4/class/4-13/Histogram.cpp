#include "Histogram.h"
#include <iostream>
using namespace std;

void Histogram::print() {
    cout << str << "\n\n";
    
    int alphaTotalCnt = 0;  // Total alphabet count
    int alphaCnt[26] = { 0 };  // Array to store each number of alphabets
        
    for (int i = 0; i < str.length(); i++) {  // Examine all characters in string
        if(!isalpha(str[i]))  // If it isn't alphabet,
            continue;  // examine next characters
        else {  // If it is alphabet,
            str[i] = tolower(str[i]);  // Change it to lower alphabet
            alphaTotalCnt++;  // Increase total alphabet count
            alphaCnt[(int)str[i] - 97]++;  // Increase the number of alphabets corresponding to it
        }
    }
        
    cout << "총 알파벳 수 " << alphaTotalCnt << "\n\n";  // print total alphabet count
        
    // print each number of alphabets with stars
    for (int i = 0; i < 26; i++) {
        cout << (char)(i+97) << " (" << alphaCnt[i] << ")\t: ";
        while(alphaCnt[i]--) {
            cout << "*";
        }
        cout << endl;
    }
}
