#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
    int next();
    int nextInRange(int min, int max);
};

int EvenRandom::next() {
    int result = rand();
    if (result % 2 != 0)
        return next();
    else
        return result;
}
int EvenRandom::nextInRange(int min, int max) {
    int result = rand() % (max - min + 1) + min;
    if (result % 2 != 0)
        return nextInRange(min, max);
    else
        return result;
}

int main() {
    //  항상 변하는 값인 시간을 seed로 넣어주어 완전 난수 생성
    srand((unsigned int)time(NULL));
    
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --\n";
    for(int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << "\n\n-- 2에서 10 까지의 랜덤 정수 10 개 --\n";
    for(int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}
