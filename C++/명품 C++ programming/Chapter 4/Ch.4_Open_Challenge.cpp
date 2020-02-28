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
	cout << "끝말 잇기 게임을 시작합니다\n"
		<< "게임에 참가하는 인원은 몇명입니까?";
	int people;
	cin >> people;

	Player* players = new Player[people];
	for (int i = 0; i < people; i++)
	{
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		string player_name;
		cin >> player_name;

		players[i].set_name(player_name);
	}

	cout << "시작하는 단어는 아버지입니다" << endl;
	string existing_word = "아버지";

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
				cout << "잘못된 단어를 입력하셨습니다! 다시 입력하세요" << endl;
		}
	}
	return 0;
}