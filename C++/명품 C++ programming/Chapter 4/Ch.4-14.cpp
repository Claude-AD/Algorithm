#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Player
{
private:
	string name; // ���� �̸�

public:
	void set_name(string name) // ���� �̸� ����
	{
		this->name = name;
	}
	string get_name() { return name; }
};

class GamblingGame
{
private:
	Player player[2]; // �� ���� �÷��̾�

public:
	GamblingGame(string name1, string name2) // �Է¹��� �̸����� ���� �̸� ����
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
				cout << player[player_number % 2].get_name() << "�� �¸�!!" << endl;
				break;
			}
			else
			{
				cout << "�ƽ�����!" << endl;
			}
		}
		player_number++;
	}
}

int main()
{
	string player1, player2;
	cout << "***** �׺� ������ �����մϴ�. *****" << endl;
	cout << "ù��° ���� �̸�>>";
	getline(cin, player1);
	cout << "�ι�° ���� �̸�>>";
	getline(cin, player2);
	GamblingGame game(player1, player2);

	game.Gambling();

	return 0;
}