#include <iostream>
using namespace std;

int main() {
    double real_arr[5]; // 5 개의 실수를 저장할 배열
    double max;    // 5 개의 실수 중 가장 큰 실수를 저장할 변수
    
    cout << "5 개의 실수를 입력하라>>";
    for (int i = 0; i < sizeof(real_arr)/sizeof(double); i++) {
        cin >> real_arr[i];
    }
    
    max = real_arr[0];  // 가장 큰 실수를 배열의 처음 저장된 실수로 초기화
    for (int i = 1; i < sizeof(real_arr)/sizeof(double); i++) {
        if (real_arr[i] > max) { // 만약 배열의 elements 중에 max보다 큰 값이 있다면
            max = real_arr[i];  // max를 그 값으로 교환
        }
    }
    
    cout << "제일 큰 수 = " << max << endl;
    return 0;
}
