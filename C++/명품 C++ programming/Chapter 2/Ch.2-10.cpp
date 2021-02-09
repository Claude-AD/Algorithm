#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_str;
    cout << "문자열 입력>>";
    cin >> input_str;
    
    // i번째 줄에는 input_str의 0번째 index부터 i번째 index까지의 글자 출력
    for (int i = 1; i <= input_str.length(); i++) {
        cout << input_str.substr(0, i) << "\n";
    }
    return 0;
}
