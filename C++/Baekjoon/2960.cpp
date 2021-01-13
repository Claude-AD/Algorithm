#include <iostream>
#include <vector>
using namespace std;

/*
�����佺�׳׽��� ü�� N���� �۰ų� ���� ��� �Ҽ��� ã�� ������ �˰����̴�.
N, K�� �־����� ��, K��° ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

int main() {
	int N, K; 
	int erase_count = 0; // K�� ���ϱ� ���� ���� ����
	cin >> N >> K;

	vector<int> v; // 2���� N���� ��� ������ ������ ����
	vector<int> erase_v; // ������ ���� ���ʷ� ������ ����

	// 2���� N���� v���Ϳ� ����
	for (int i = 2; i <= N; i++) {
		v.push_back(i); 
	}

	//v���Ϳ��� ��� ���� �������� ������ �ݺ�
	while (!v.empty()) {
		erase_v.push_back(*v.begin()); // ���� ������ ���� �� �� ���� ���� ��(v������ ó���� �ִ� ��)�� ã�� erase_v���Ϳ� ����
		v.erase(v.begin()); // �� ���� ����
		erase_count++; // ���� �ϳ��� ���� ������ ī��Ʈ�� �ϳ��� ������Ŵ
		
		int P = erase_v.back(); // ���� ���� P��� �� ��
		for (int i = 0; i < v.size(); i++) { // v���� ��� ���ҿ� ���Ͽ�
			if (v[i] % P == 0) { // ���� �� ���Ұ� P�� ������
				erase_v.push_back(v[i]); // erase_v���Ϳ� �����ϰ�
				erase_count++; // ī��Ʈ�� �ϳ� ������Ų ��
				v.erase(v.begin() + i); // ��������
			}
		}
	}
	cout << erase_v[K - 1] << endl; // 1��° ������ ���� 0��° �����̹Ƿ� erase_v���Ϳ��� K-1��° ���Ҹ� ã�Ƽ� ���
	return 0;
}