#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_case; // test case�� ����
	cin >> test_case; // ����ڷκ��� �Է¹���
	
	int dataset_num = 1; // ��� �� ����� dataset�� ��ȣ
	while (test_case--) { // test case �� ����
		int idx; // ������ ������ index
		string word; // single word
		cin >> idx >> word; // index�� single word�� ����ڷκ��� �Է¹���

		word.erase(idx - 1, 1); // �Է¹��� index�� �� ���ڸ� ����

		cout << dataset_num++ << " " << word << endl; // ��� ���
	}
	return 0;
}