#include "WordGame.h"
#include <iostream>
using namespace std;

void WordGame::playGame() {
    int index = 0;  // 참가자 이름을 받아오기 위한 index
    while(1) {
        string inputWord;
        cout << players[index].getName() << ">>";  // 해당 차례의 참가자 이름 불러와 출력
        cin >> inputWord;  // 단어 입력 받음
        
        //  만약 한글 끝말잇기였다면
        //  if(preWord.at(preWord.size() - 2) == inputWord.at(0) &&
        //     preWord.at(preWord.size() - 1) == inputWord.at(1))
        
        //  앞 단어 맨 뒷 글자와 입력 받은 단어 맨 첫 글자가 같다면
        if(preWord.at(preWord.size() - 1) == inputWord.at(0)) {
            preWord = inputWord;    // 앞 단어를 지금 입력받은 단어로 바꾸고
            index++;                // 다음 차례로 넘김
            if(index == playerCnt)  // 만약 마지막 차례였다면
                index = 0;          // 다시 맨 처음 사람으로 이동
        }
        //  다르다면 Error message 출력하고 while문의 처음으로 돌아감
        else {
            cout << "Word Error!\n";
            continue;
        }
    }
}
