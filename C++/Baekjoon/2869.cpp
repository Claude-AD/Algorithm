#include <iostream>
using namespace std;

int main()
{
	int climb, slip, stick_height; // �����̰� ���� �ö󰡴� �Ÿ�, �㿡 �̲������� �Ÿ�, ���� ������ �� ����
	cin >> climb >> slip >> stick_height; // ����ڷκ��� �Է¹���
	
	/*
	�����̴� �Ϸ翡 (climb - slip)��ŭ �ö󰣴�. ������ �����̰� ��ǥ ������ ������ ������ ���� �Ǳ� ���� �����ϹǷ� 
	�̲������� �ʱ� ������ �� (stick_height - slip)��ŭ �ö󰡴� �Ͱ� ����. 
	
	���� (stick_height - slip)�� (climb - slip)���� �������ָ� �ȴ�.
	��, ��Ȯ�� ������ �������� ���� �ÿ� �Ϸ縦 �����ش�.
	*/

	int day_count = (stick_height - slip) / (climb - slip);
	if ((stick_height - slip) % (climb - slip) != 0)
		day_count++;
	
	cout << day_count << endl; // ��� ���
	return 0;
}