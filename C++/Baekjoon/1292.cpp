#include <iostream>
using namespace std;

int main()
{
	
	// 1 2 2 3 3 3 4 ... �� ����, A�� B�� 1���� 1000�����̹Ƿ� ũ�Ⱑ 1000�� �迭 ����
	int progression[1000] = { 0 }; 
	int num = 1; // ������ �� ����
	int index = 0; // ������ �ε���

	while (index < 1000) { // ������ ������ ������ ����
		for (int i = 0; i < num; i++) { // ������ ������ ũ�⸸ŭ ���� (1�� �� ��, 2�� �� ��, ... )
			progression[index] = num;
			index++;

			if (index == 1000) // ������ �����ϴ� ���� ������ ���� �����ϸ� �ݺ��� Ż��
				break;
		}
		num++; // ������ ������ ũ�⸸ŭ ��� ������ �� ���� ������ �Ѿ
	}

	int start, end; // ������ �� ����
	cin >> start >> end; // ����ڷκ��� �Է¹���

	int result = 0; // ���� ���
	int result_idx = start - 1; // ������ �� ������ ������ �����κ��� �޾ƿ��� ���� �ε���
	while (result_idx < end) { // ������ ������
		result += progression[result_idx]; // ���� ����� ���� ������ ������ ����
		result_idx++;
	}

	cout << result << endl; // ��� ���

	return 0;
}