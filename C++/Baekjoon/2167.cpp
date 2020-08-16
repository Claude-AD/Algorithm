#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int row_size, col_size; // 2���� �迭�� rowũ��, columnũ��
	cin >> row_size >> col_size; // ����ڷκ��� �Է¹���

	vector<vector<int>> arr(row_size, vector<int>(col_size, 0)); // ���͸� �̿��Ͽ� �Է¹��� ũ��� 2���� �迭 ����, 0���� �ʱ�ȭ

	for (int i = 0; i < row_size; i++) { // 2���� �迭�� ���Ҹ� �Է¹���
		for (int j = 0; j < col_size; j++) {
			cin >> arr[i][j];
		}
	}

	int test_case; // �׽�Ʈ ���̽� ����
	cin >> test_case; // ����ڷκ��� �Է¹���

	for (int T = 0; T < test_case; T++) { // �׽�Ʈ ���̽� �ϳ� ��
		int i, j, x, y; // (i, j), (x, y)��ǥ
		cin >> i >> j >> x >> y; // ����ڷκ��� �Է¹���

		int sum = 0; // ���ҵ��� �� ��
		for (int m = i - 1; m < x; m++) { // �Է¹��� (i, j)���Һ��� (x, y)���ұ���
			for (int n = j - 1; n < y; n++) {
				sum += arr[m][n]; // �� �� ������ ������
			}
		}
		cout << sum << endl; // �� �� ���
	}
	return 0;
}