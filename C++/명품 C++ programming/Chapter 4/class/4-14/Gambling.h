#ifndef GAMBLING_H
#define GAMBLING_H

#include <string>
using namespace std;

class Player {
    string name;
public:
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

class GamblingGame {
    Player *players = new Player[2];
    void setPlayers(string name1, string name2);
public:
    ~GamblingGame() { delete [] players; }
    void run(string player1, string player2);
};
#endif
