//  Created by 윤준혁 on 2021/02/07.
//  ArrayList.h

#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE        1       // '참'을 표현하기 위한 매크로 정의
#define FALSE       0       // '거짓'을 표현하기 위한 매크로 정의

#define LIST_LEN    100

template <class T>
class ArrayList {
public:
    T arr[LIST_LEN];
    int num_of_data;
    int cur_position;
    
    ArrayList() {
        num_of_data = 0;    // list에 저장된 데이터의 수는 0
        cur_position = -1;  // 현재 아무 위치도 가리키지 않음
    }
    
    int LFirst(T * pdata);
    int LNext(T * pdata);

    void LInsert(T data);
    T LRemove();
    int LCount() {
        return num_of_data;
    }
};

#endif
