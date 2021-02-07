//  Created by 윤준혁 on 2021/02/07.
//  Array 기반 List 구현

#include "ArrayList.h"
#include "ArrayList.cpp"
#include <iostream>
using namespace std;

int main() {
    // ArrayList의 생성 및 초기화
    ArrayList<int> list;
    int data;
    
    // 삭제 연산을 진행 할 때 24를 지워볼 것이므로
    cout << "꼭 24를 포함한 5개의 정수로 이루어진 data set을 입력해주세요!\n";
    
    // 사용자가 5개의 데이터 저장
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        list.LInsert(num);
    }
    
    // 저장된 데이터 전체 출력
    cout << "현재 데이터의 수: " << list.LCount() << endl;
    
    if(list.LFirst(&data)) {
        cout << data << " ";
        
        while (list.LNext(&data)) {
            cout << data << " ";
        }
    }
    cout << "\n\n";
    
    // 숫자 24를 탐색하여 모두 삭제
    if (list.LFirst(&data)) {
        if (data == 24)
            list.LRemove();
        
        while (list.LNext(&data)) {
            if (data == 24)
                list.LRemove();
        }
    }
    
    // 삭제 후 남은 데이터 전체 출력
    cout << "현재 데이터의 수: " << list.LCount() << endl;
    
    if(list.LFirst(&data)) {
        cout << data << " ";
        
        while (list.LNext(&data)) {
            cout << data << " ";
        }
    }
    cout << "\n\n";
    return 0;
}
