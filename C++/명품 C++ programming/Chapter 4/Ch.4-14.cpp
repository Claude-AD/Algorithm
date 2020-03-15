#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Player
{
private:
	string name; // 선수 이름

public:
	void set_name(string name) // 선수 이름 세팅
	{
		this->name = name;
	}
	string get_name() { return name; }
};

class GamblingGame
{
private:
	Player player[2]; // 두 명의 플레이어

public:
	GamblingGame(string name1, string name2) // 입력받은 이름으로 선수 이름 세팅
	{
		player[0].set_name(name1);
		player[1].set_name(name2);
	}
	void Gambling();
};

void GamblingGame::Gambling()
{
	int player_number = 0;
	while (true)
	{
		char start;
		cout << player[player_number % 2].get_name() << ":";
		cin.get(start);

		srand(time(nullptr));
		if (start == '\n')
		{
			int num1 = rand() % 3;
			int num2 = rand() % 3;
			int num3 = rand() % 3;

			cout << '\t' << num1 << '\t' << num2 << '\t' << num3 << '\t';
			if (num1 == num2 && num1 == num3)
			{
				cout << player[player_number % 2].get_name() << "님 승리!!" << endl;
				break;
			}
			else
			{
				cout << "아쉽군요!" << endl;
			}
		}
		player_number++;
	}
}

int main()
{
	string player1, player2;
	cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
	cout << "첫번째 선수 이름>>";
	getline(cin, player1);
	cout << "두번째 선수 이름>>";
	getline(cin, player2);
	GamblingGame game(player1, player2);

	game.Gambling();

	return 0;
}