#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << i;
        if (i % 10 == 0) {  // 10단위로 끊어서 줄 바꿈
            cout << "\n";
        }
        else {              // 나머지는 tab으로 구분
            cout << "\t";
        }
    }
    return 0;
}
