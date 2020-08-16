/* 
������ �ذ��� �˰����� ���� ��ġ�� ����� ���� �ڿ� ���� ��ġ���� ������������ �����ϰ� 
���� ��� ������ ��� ������ ������� ���ʴ�� �鷶�ٰ� �ٽ� ���������� ���ƿ��� �ּҰŸ��� �ȴٴ� ���� �̿��Ͽ���.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int test_case; // �׽�Ʈ ���̽��� ����
	cin >> test_case; // ����ڷκ��� �Է¹���

	for (int i = 0; i < test_case; i++) { // �׽�Ʈ ���̽� �� �� ��
		int shop_num; // ������ ����
		cin >> shop_num; // ����ڷκ��� �Է¹���

		vector<int> shop_location; // ������ ��ġ�迭, ���ͷ� ����, new-delete �����Ҵ����� �����ϴ� sort�Լ����� ������ ��
		int sum = 0; // ��� ������ ���ϱ� ���� ���� ��ġ���� ��
		for (int j = 0; j < shop_num; j++) { // ������ ������ŭ
			int shop;
			cin >> shop; // ������ ��ġ�� �Է¹޾Ƽ�
			shop_location.push_back(shop); // ���� ��ġ�迭�� ����
			sum += shop; // sum ������ ���� ��ġ�� ������
		}

		sort(shop_location.begin(), shop_location.end()); // sort�Լ��� ���� ��ġ�迭 ������������ ����

		int average = sum / shop_num; // ���� ��ġ���� ��������� ����
		int min_distance = 0; // �ִ� �Ÿ� ����
		min_distance += shop_location[shop_num - 1] - average; // ��� �������� ������ ���������� �Ÿ��� min_distance�� ������
		min_distance += average - shop_location[0]; // ó�� �������� ��� ���������� �Ÿ��� min_distance�� ������

		for (int j = 0; j < shop_num - 1; j++) { // ��� �������� �ѹ� �� �鷯�� �ϹǷ�
			min_distance += shop_location[j + 1] - shop_location[j]; // ������ ������ �Ÿ��� ��� min_distance�� ������
		}
		cout << min_distance << endl; // �ִ� �Ÿ� ���

	}
	return 0;
}