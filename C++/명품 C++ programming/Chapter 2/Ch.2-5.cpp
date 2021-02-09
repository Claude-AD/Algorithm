#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int x_cnt = 0;  // variable that counts number of 'x'
    
    cout << "문자들을 입력하라.\n";
    getline(cin, str);  // 문자열 사이의 공백까지 포함시키기 위하여 getline사용
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'x') {    // 'x'발견할 때 마다 x-cnt 1씩 증가
            x_cnt++;
        }
    }
    cout << "x의 개수는 " << x_cnt << endl;
    return 0;
}
