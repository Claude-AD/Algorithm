#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h; // ���簢�� ������ ���� ��ġ(x, y), ���簢���� ������ ��� ������(w, h)
	cin >> x >> y >> w >> h; // ����ڷκ��� �Է¹���

	int length[4] = { x, y, w - x, h - y }; // �� (x, y)�κ��� ���簢�� �� �������� �Ÿ�
	int min = length[0]; // �ּڰ�, �⺻���� length[0]���� ����
	for (int i = 1; i < 4; i++) // �� �������� �Ÿ��� �ּڰ� ������ ���Ͽ�
	{
		if (length[i] <= min) // �ּڰ� �������� �ش� �������� �Ÿ��� �� �۴ٸ�
			min = length[i]; // �ּڰ� ���� ��ü
	}

	cout << min << endl; // �ּڰ� ���
	return 0;
}