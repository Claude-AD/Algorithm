#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << j << "x" << i << "=" << j*i;
            
            if (j == 9) {
                cout << "\n";
            } else {
                cout << "\t";
            }
        }
    }
    return 0;
}
