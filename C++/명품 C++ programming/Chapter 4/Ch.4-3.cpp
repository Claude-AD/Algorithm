#include <iostream>
#include <string>
using namespace std;

int main() {
    // (1) [] 사용
    string strAt;
    int aCountAt = 0;
    cout << "(1) 문자열 입력>> ";
    getline(cin, strAt);
    
    for(int i = 0; i < strAt.length(); i++) {
        if(strAt[i] == 'a')
            aCountAt++;
    }
    cout << "문자 a는 " << aCountAt << "개 있습니다.\n";
    
    // (2) find 사용
    string strFind;
    int aCountFind = 0;
    int index = 0;
    cout << "(2) 문자열 입력>> ";
    getline(cin, strFind);
    
    while(1) {
        int i = strFind.find('a', index);
        if (i == -1)
            break;
        else {
            aCountFind++;
            index = i + 1;
        }
    }
    cout << "문자 a는 " << aCountFind << "개 있습니다.\n";
    return 0;
}
