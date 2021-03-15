#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // 난수 2개 생성해서 하나는 스트링 인덱스, 하나는 알파벳 소문자 아스키코드
    // 랜덤 위치, 랜덤 글자로 바꾸기
    srand((unsigned)time(0));
    cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다)\n";
    
    while(1) {
        cout << ">>";
        string inputStr;
        getline(cin, inputStr);
        
        if(inputStr == "exit")
            break;
        else {
            int strIndex = rand() % inputStr.length();
            char charAscii = (char)(rand() % 26 + 97);
            
            if(inputStr.at(strIndex) == ' ') {  // 스트링의 랜덤 위치가 공백이라면
                inputStr.at(strIndex + 1) = charAscii;  // 그 다음 문자를 바꿈
            } else {
                inputStr.at(strIndex) = charAscii;
            }
            cout << inputStr << endl;
        }
    }
    return 0;
}
