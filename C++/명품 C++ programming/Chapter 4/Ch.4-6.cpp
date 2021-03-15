#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다)\n";
    
    while(1) {
        cout << ">>";
        string inputStr;
        getline(cin, inputStr);
        
        if(inputStr == "exit")
            break;
        else {
            for(int i = inputStr.length() - 1; i >= 0; i--) {
                cout << inputStr[i];
            }
            cout << endl;
        }
    }
    return 0;
}
