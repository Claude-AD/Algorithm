//  Created by 윤준혁 on 2021/02/07.
//  Hanoi tower를 재귀함수로 구현

#include <iostream>
using namespace std;

void HanoiTowerMove(int num, char from, char by, char to) {
    // 이동할 원반의 수가 1개라면
    if(num == 1)
        cout << "원반1 " << from << "에서 " << to << "로 이동\n";
    // 2이상이면 가장 큰 원반을 제외한 나머지를 여분의 막대에 옮겨놓고 가장 큰 원반을 목표 막대에 옮긴뒤 나머지를 목표 막대에 옮기는 과정을 반복한다.
    else {
        HanoiTowerMove(num-1, from, to, by);
        cout << "원반" << num << " " << from << "에서 " << to << "로 이동\n";
        HanoiTowerMove(num-1, by, from, to);
    }
}

int main() {
    // 사용자로부터 원반의 개수를 입력받고 하노이 타워 방식으로 옮기는 과정을 print함
    int disk;
    cin >> disk;
    
    // 막대A의 원반 disk개를 막대B를 경유하여 막대C로 옮기기
    HanoiTowerMove(disk, 'A', 'B', 'C');
    return 0;
}
