#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/* �簢���� �� ��ǥ�� �־����� ������ �� ��ǥ�� ���ϴ� ������ ��Ģ�� x��ǥ y��ǥ ���� �ι��� ������ ���� ���� ã���� �ȴ�. */
	int test_case;		
	cin >> test_case;					// test case Ƚ�� �Է�
	for (int t = 0; t < test_case; t++) // �Է��� test case Ƚ�� ����
	{
		int rect[3][2];					// �簢���� �� ��ǥ�� �Է��� ������ �迭 ����
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
				cin >> rect[i][j];		// �簢���� �� ��ǥ �Է�
		}
		int point[2] = { 0 };			// ������ �� ��ǥ�� �Է��� �迭 ����
		
		/*
		for (int k = 0; k < 2; k++)		// x��ǥ, y��ǥ ��� �ڵ尡 �����Ƿ� for������ ó��. �Ʒ� ������ x��ǥ ����
		{
			if (rect[0][k] == rect[1][k]) // ù��° x��ǥ�� �ι�° x��ǥ�� ������
				point[k] = rect[2][k];	// ����° x��ǥ�� �簢���� ������ �� ��ǥ�� x��ǥ
			else						
			{							// ù��° x��ǥ�� �ι�° x��ǥ�� �ٸ���
				if (rect[0][k] == rect[2][k]) // ù��° x��ǥ�� ����° x��ǥ�� ���ؼ� ������
					point[k] = rect[1][k]; // �ι�° x��ǥ�� �簢�� ������ �� ��ǥ�� x��ǥ
				else if (rect[0][k] != rect[2][k]) // �ٸ���
					point[k] = rect[0][k]; // ù��° x��ǥ�� �簢�� ������ �� ��ǥ�� x��ǥ
			}
		}
		*/

		// ��Ʈ XOR�����ڸ� ����ϸ� �� �����ϰ� �ذ��� �� �ִ�.
		point[0] = rect[0][0] ^ rect[1][0] ^ rect[2][0];
		point[1] = rect[0][1] ^ rect[1][1] ^ rect[2][1];
		cout << point[0] << ' ' << point[1] << endl; // x��ǥ, y��ǥ ���ʴ�� ���
	}
	return 0;
}
