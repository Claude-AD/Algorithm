//  Xcode Thread 1: signal SIGABRT 오류 해결
//  변수 선언 뒤 초기화 꼭 해줄 것

#include "Date.h"
#include <string>
#include <cstring>
using namespace std;

Date::Date(string date) {
    //  C++ string은 특정 문자 기준으로 문자열을 자르는 함수가 없으므로
    //  C 스타일의 문자열로 변환하여 strtok 사용
    char buf[9] = { NULL, };        // 년도 + 달 + 일 + '\0' = 9
    int Cdate[3] = { 0, };          // 년도, 달, 일
    strcpy(buf, date.c_str());

    char *tok = strtok(buf, "/");
    for (int i = 0; i < 3; i++) {
        Cdate[i] = atoi(tok);
        tok = strtok(NULL, "/");
    }

    year = Cdate[0];
    month = Cdate[1];
    day = Cdate[2];
}
