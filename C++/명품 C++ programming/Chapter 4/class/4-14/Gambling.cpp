#include "Gambling.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void GamblingGame::setPlayers(string name1, string name2) {
    players[0].setName(name1);
    players[1].setName(name2);
}

void GamblingGame::run(string player1, string player2) {
    srand((unsigned int)time(0));
    setPlayers(player1, player2);
    
    int index = 0;
    while(1) {
        cout << players[index].getName() << ":<Enter>";
        char inputKey;
        cin.get(inputKey);
        if(inputKey != '\n') {
            cout << "Enter키를 입력하세요!!\n";
            continue;
        } else {
            int num1 = rand() % 3;
            int num2 = rand() % 3;
            int num3 = rand() % 3;
            
            cout << "\t\t\t\t" << num1 << "\t\t" << num2 << "\t\t" << num3 << "\t\t";
            if(num1 == num2 && num2 == num3) {
                cout << players[index].getName() << "님 승리!!\n";
                break;
            } else {
                cout << "아쉽군요!\n";
            }
        }
        index++;
        if(index == 2)
            index = 0;
    }
}
