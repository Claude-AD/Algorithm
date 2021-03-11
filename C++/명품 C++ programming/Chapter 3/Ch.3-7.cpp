#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
    int isOdd;
public:
    //  num == 1이면 홀수, 0이면 짝수
    SelectableRandom(int num) : isOdd(num) { }
    int next();
    int nextInRange(int min, int max);
};

int SelectableRandom::next() {
    int result = rand();
    if (result % 2 != isOdd)
        return next();
    else
        return result;
}
int SelectableRandom::nextInRange(int min, int max) {
    int result = rand() % (max - min + 1) + min;
    if (result % 2 != isOdd)
        return nextInRange(min, max);
    else
        return result;
}

int main() {
    //  항상 변하는 값인 시간을 seed로 넣어주어 완전 난수 생성
    srand((unsigned int)time(NULL));
    
    SelectableRandom randomEven(0);
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개 --\n";
    for(int i = 0; i < 10; i++) {
        int n = randomEven.next();
        cout << n << ' ';
    }
    
    SelectableRandom randomOdd(1);
    cout << "\n\n-- 2에서 9 까지의 랜덤 홀수 정수 10 개 --\n";
    for(int i = 0; i < 10; i++) {
        int n = randomOdd.nextInRange(2, 9);
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}
