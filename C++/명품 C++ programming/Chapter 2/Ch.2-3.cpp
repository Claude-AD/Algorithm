#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "서로 다른 두 정수를 입력하라>>";
    cin >> num1 >> num2;
    
    cout << "큰 수 = ";
    if (num1 > num2) {
        cout << num1 << endl;
    } else {
        cout << num2 << endl;
    }
    return 0;
}
