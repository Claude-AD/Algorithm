//  맥에서의 유니코드 정규화 문제(NFD)로 Xcode 콘솔에서 한글로 입력 받을 때 자소분리 되는 문제를 해결하려 했으나 실패하였다.
//  따라서 본 문제는 영어 끝말잇기 게임으로 대체하였으며 만약 한글 끝말잇기 게임을 구현하기 위해서는
//  단어 마지막 글자 비교시 두 바이트씩 비교하면 된다.

#include "WordGame.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "영어 끝말 잇기 게임을 시작합니다\n";
    
    int playerCount;  // 참가 인원
    string playerName;  // 참가자 이름
    
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> playerCount;
    WordGame wordGame(playerCount);
    
    Player *playerArr = new Player[playerCount];  // 입력받은 참가자 이름을 저장해서 wordGame객체에 넘겨주기 위한 객체배열
    for (int i = 0; i < playerCount; i++) {
        cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
        cin >> playerName;
        Player player(playerName);
        playerArr[i] = player;
    }
    wordGame.setPlayers(playerArr);  // 입력받은 참가자 이름을 모두 wordGame객체에 넘겨줌
    
    cout << "시작하는 단어는 apple입니다\n";
    wordGame.playGame();
    
    delete [] playerArr;
    return 0;
}
