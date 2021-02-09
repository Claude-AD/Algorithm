#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {  // 구구단 뒷 숫자
        for (int j = 1; j <= 9; j++) { // 구구단 앞 숫자
            cout << j << "x" << i << "=" << j*i;
            
            if (j == 9) {   // 9 기준으로 줄 바꿈
                cout << "\n";
            } else {
                cout << "\t";
            }
        }
    }
    return 0;
}
