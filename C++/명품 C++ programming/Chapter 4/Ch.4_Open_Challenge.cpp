#include <iostream>
#include <string>
using namespace std;

class WordGame
{
private:
	string word;

public:
	void set_word(string word);
	string get_word();
	bool compare_word(string word1, string word2);
};

void WordGame::set_word(string word)
{
	this->word = word;
}

string WordGame::get_word()
{
	return word;
}

bool WordGame::compare_word(string word1, string word2)
{
	if (word1[word1.size() - 2] == word2[0] &&
		word1[word1.size() - 1] == word2[1])
		return true;
	else
		return false;
}

class Player
{
private:
	string name;
	
public:
	void set_name(string name);
	string get_name();
};

void Player::set_name(string name)
{
	this->name = name;
}

string Player::get_name()
{
	return name;
}

int main()
{
	cout << "���� �ձ� ������ �����մϴ�\n"
		<< "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	int people;
	cin >> people;

	Player* players = new Player[people];
	for (int i = 0; i < people; i++)
	{
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		string player_name;
		cin >> player_name;

		players[i].set_name(player_name);
	}

	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�" << endl;
	string existing_word = "�ƹ���";

	int player_index = 0;
	while (true)
	{
		if (player_index == people)
			player_index = 0;

		else
		{
			WordGame game;
			cout << players[player_index].get_name() << ">>";
			string input_word;
			cin >> input_word;

			bool result = game.compare_word(existing_word, input_word);
			if (result)
			{
				existing_word = input_word;
				player_index++;
			}
			else
				cout << "�߸��� �ܾ �Է��ϼ̽��ϴ�! �ٽ� �Է��ϼ���" << endl;
		}
	}
	return 0;
}