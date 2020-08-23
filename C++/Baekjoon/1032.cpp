#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int file_name_num; // �Է��� ���� �̸� ����
	cin >> file_name_num; // ����ڷκ��� �Է¹���

	vector<string> file_name; // ���� �̸� ���͸� ����
	for(int i = 0; i < file_name_num; i++) { // �Է��� ���� �̸� ������ŭ 
		string file;
		cin >> file; // ����ڷκ��� ���� �̸� �Է¹ް�
		file_name.push_back(file); // ���� �̸� ���Ϳ� push_back
	}

	string pattern = file_name[0]; // ���������Ʈ�� ����� ����, �ʱⰪ�� ù��° �����̸�
	for (int i = 1; i < file_name_num; i++) { // ��� ���� �̸� ���� ���ҿ� ���Ͽ�
		for (int j = 0; j < file_name[0].size(); j++) { // ��� ���� �̸��� ���̰� �����Ƿ� ó�� ���� �̸��� ö�� �� ��ŭ
			if (pattern[j] != file_name[i][j]) // ���ϰ� ���� �̸��� ö�ڰ� �ٸ��ٸ�
				pattern[j] = '?'; // ���Ͽ� ? �Է�
		}
	}
	cout << pattern << endl; // ���� ���
	return 0;
}