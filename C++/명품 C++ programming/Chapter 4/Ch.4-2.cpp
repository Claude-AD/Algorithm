#include <iostream>
using namespace std;

int main() {
    // 사실 이 문제에서는 배열을 동적할당 할 필요없이 sum변수 만으로도 원하는 결과를 얻을 수 있지만
    // 연습용으로 배열 동적할당을 넣음
    int *intArr = new int[5];
    double sum = 0;
    double result;
    cout << "정수 5개 입력>> ";
    
    for(int i = 0; i < 5; i++) {
        int inputNum;
        cin >> inputNum;
        intArr[i] = inputNum;
        sum += inputNum;
    }
    
    result = sum / 5;
    cout << "평균 " << result << endl;
    
    delete [] intArr;
    return 0;
}
