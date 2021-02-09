#include <iostream>
#include <string>
using namespace std;

int main() {
    while(1) {
        string input_str;
        cout << "종료하고싶으면 yes를 입력하세요>>";
        getline(cin, input_str);
        
        if (input_str.compare("yes") == 0) {
            cout << "종료합니다...\n";
            break;
        }
    }
    return 0;
}
