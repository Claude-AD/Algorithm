#include <iostream>
using namespace std;

int main()
{
	string word; // ���ĺ� ��ҹ��ڷ� �̷���� �ܾ�
	cin >> word; // ����ڷκ��� �Է¹���

	int alphabet[26] = { 0 }; // ���ĺ� ���� �󸶳� �������� count�ϱ� ���� �����迭
	for (int i = 0; i < word.size(); i++) { // �빮�ڿ� �ҹ��ڸ� �������� �����Ƿ�
		if(islower(word[i])) // �ܾ��� ö�� �� �ҹ��ڸ�
			word[i] = toupper(word[i]); // �빮�ڷ� ��ȯ (��� �� �빮�ڷ� ����ؾ��ϹǷ�)

		alphabet[word[i] - 'A']++; // ���� ���ĺ� count�� 1 �÷��ش� 
	}

	int most_used_idx = 0; // ���� ���� ���� ���ĺ��� �ش��ϴ� alphabet�迭�� �ε���, �ʱⰪ 0
	char most_used_alpha = 'A'; // ���� ���� ���� ���ĺ�, �ʱⰪ A

	int max = alphabet[0]; // ���� ���� ���� ���ĺ��� Ž���ϱ� ���� max ����, �ʱⰪ alphabet[0]
	for (int i = 1; i < 26; i++) { // ���� ���� ���� ���ĺ� Ž��
		if (alphabet[i] > max) {
			max = alphabet[i];
			most_used_idx = i;
			most_used_alpha = i + 'A';
		}
	}
	for (int i = 0; i < 26; i++) {
		if (i == most_used_idx) // ���� ���� ���� ���ĺ��� �����ϰ�
			continue;
		else if (max == alphabet[i]) { // �ٸ� ���ĺ� �� �Ȱ��� ����ŭ ���� ���ĺ��� �ִٸ�
			cout << "?" << endl; // ? ���
			return 0; // main�Լ� ����
		}
	}
	cout << most_used_alpha << endl; // �׷��� �ʴٸ� ���� ���� ���� ���ĺ� ���
	return 0; // main�Լ� ����
}