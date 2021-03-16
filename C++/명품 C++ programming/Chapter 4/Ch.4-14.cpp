#include "Gambling.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "***** 겜블링 게임을 시작합니다. *****\n";
    string player1, player2;
    cout << "첫번째 선수 이름>>";
    getline(cin, player1);  // cin으로 입력받으면 입력큐에 \n이 남아있어 보기 안좋음
    cout << "두번째 선수 이름>>";
    getline(cin, player2);
    
    GamblingGame game;
    game.run(player1, player2);
    return 0;
}
