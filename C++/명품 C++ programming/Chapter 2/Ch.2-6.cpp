#include <iostream>
#include <string>
using namespace std;

int main() {
    string password, password_confirm;
    
    cout << "새 암호를 입력하세요>>";
    cin >> password;
    cout << "새 암호를 다시 한 번 입력하세요>>";
    cin >> password_confirm;
    
    /*
     == 연산자를 사용하면 두 string의 memory주소를 비교하므로
     문자열이 같아도 결과는 다르다고 나옴. 따라서 compare함수 사용
    */
    if (password.compare(password_confirm) == 0) {
        cout << "같습니다\n";
    } else {
        cout << "같지 않습니다\n";
    }
    return 0;
}
