#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
    int next() { return rand(); }
    int nextInRange(int min, int max) {
        //  난수를 max + 1로 나눈 나머지는 0부터 max까지의 난수
        //  최솟값을 설정할 때는 나누는 수에서 뺀 뒤 나머지에 더해줌
        return rand() % (max - min + 1) + min;
    }
};

int main() {
    //  항상 변하는 값인 시간을 seed로 넣어주어 완전 난수 생성
    srand((unsigned int)time(NULL));
    
    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --\n";
    for(int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << "\n\n-- 2에서 4 까지의 랜덤 정수 10 개 --\n";
    for(int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}
