//  Created by 윤준혁 on 2021/02/07.
//  ArrayList.cpp

#include "ArrayList.h"
#include <iostream>
using namespace std;

template <class T>
int ArrayList<T>::LFirst(T * pdata) {
    if(num_of_data == 0) // 저장된 데이터가 하나도 없다면
        return FALSE;
    
    cur_position = 0;    // 첫 번째 데이터 참조
    *pdata = arr[0];     // pdata가 가리키는 공간에 데이터 저장
    return TRUE;
}

template <class T>
int ArrayList<T>::LNext(T * pdata) {
    if(cur_position >= (num_of_data)-1)   // 더 이상 참조할 데이터가 없다면
        return FALSE;
    
    cur_position++;    // 참조 위치 1 증가
    *pdata = arr[cur_position];   // pdata가 가리키는 공간에 데이터 저장
    return TRUE;
}

template <class T>
void ArrayList<T>::LInsert(T data) {
    if(num_of_data >= LIST_LEN) {    // 더 이상 저장할 공간이 없다면
        cout << "저장이 불가능합니다.\n";
        return;
    }
    arr[num_of_data] = data;  // 마지막에 데이터 저장
    num_of_data++; // 저장된 데이터의 수 증가
}

template <class T>
T ArrayList<T>::LRemove() {
    int remove_position = cur_position;      // 삭제할 데이터의 인덱스 값 참조
    int num = num_of_data;
    T remove_data = arr[remove_position];    // 삭제할 데이터를 임시로 저장
    
    // 삭제를 위한 데이터의 이동을 진행하는 반복문
    for(int i = remove_position; i < num - 1; i++)
    arr[i] = arr[i+1];
    
    num_of_data--;     // 데이터의 수 감소
    cur_position--;    // 참조위치를 하나 되돌린다
    return remove_data;         // 삭제된 데이터의 반환
}
