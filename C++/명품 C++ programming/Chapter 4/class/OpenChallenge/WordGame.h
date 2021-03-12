#ifndef WORDGAME_H
#define WORDGAME_H

#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;  // Player 이름
    string word;  // Player가 입력한 단어
public:
    Player() { return; }  // Player 객체 배열 선언을 위한 기본 생성자
    Player(string str) : name(str) { }
    void setWord(string word) { this->word = word; }
    string getWord() { return word; }
    string getName() { return name; }
};

class WordGame {
    int playerCnt;  // 게임에 참가하는 인원
    string preWord;  // 바로 전 player가 입력한 단어
    Player *players = new Player[playerCnt];  // 참가자를 저장할 객체 배열, 참가 인원이 미정이므로 동적으로 생성
public:
    WordGame(int count) : playerCnt(count), preWord("apple") { }  // 시작 단어 : apple
    ~WordGame() { delete [] players; }  // 소멸자에 동적으로 할당받은 객체 배열 메모리 반환
    void setPlayers(Player *playerArr) { players = playerArr; }
    string getPreWord() { return preWord; }
    void playGame();  // 끝말잇기 게임 진행
};

#endif
