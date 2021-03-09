#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n"
    << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    
    
    string alphaStr;  //  String to receive input from user
    int alphaTotalCnt = 0;  // Total alphabet count
    int alphaCnt[26] = { 0 };  // Array to store each number of alphabets
    getline(cin, alphaStr, ';');
    
    for (int i = 0; i < alphaStr.length(); i++) {  // Examine all characters in string
        if(!isalpha(alphaStr[i]))  // If it isn't alphabet,
            continue;  // examine next characters
        else {  // If it is alphabet,
            alphaStr[i] = tolower(alphaStr[i]);  // Change it to lower alphabet
            alphaTotalCnt++;  // Increase total alphabet count
            alphaCnt[(int)alphaStr[i] - 97]++;  // Increase the number of alphabets corresponding to it
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
    return 0;
}
