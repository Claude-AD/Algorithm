// ������ B�� ��迭���� ����� ������ �־����� B�� ��迭���� �ʴ´ٸ� �ڵ尡 �ſ� ����������
// ���� B�� ��迭�ص� ������ �������� ó���ǹǷ� �ش� �ڵ�� A, B��� ��迭 �ϴ� ������� Ǯ����.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void get_elem(vector<int> &v, int length); // vector�� ���Ҹ� ����ִ� �Լ�, vector�� �� Call by reference�� �����Ѵ�.
int S(vector<int> A, vector<int> B); // �������� �־��� �Լ�, A�� B�� ���Ҹ� ���ʴ�� ���ϴ� �Լ�

int main()
{
	int arr_length; // �Է��� A�� B�� ����
	cin >> arr_length; // ����ڷκ��� �Է¹���

	vector<int> A, B; // A�� B�� vector�� ����
	get_elem(A, arr_length); // A�� ���Ҹ� �Է¹���
	get_elem(B, arr_length); // B�� ���Ҹ� �Է¹���

	// S�� �ּҰ��� �Ƿ��� ���� ���ҿ� ū ���ҳ��� ���� �����ָ� �ǹǷ�
	// A�� ������������, B�� ������������ �����ؼ� �����ش�.
	sort(A.begin(), A.end()); // �������� ����
	sort(B.begin(), B.end(), greater<int>()); // �������� ����

	cout << S(A, B) << endl; // S�Լ� ��� ���
	return 0;
}

void get_elem(vector<int> &v, int length) {
	for (int i = 0; i < length; i++) { // �־��� ���̸�ŭ
		int elem;
		cin >> elem; // ����ڷκ��� ���� �Է¹޾Ƽ�
		v.push_back(elem); // vector�� push_back
	}
}

int S(vector<int> A, vector<int> B) {
	int sum = 0; // A�� B �� vector ���ҵ��� ���� ��
	for (int i = 0; i < A.size(); i++) { // A, B �� �� ũ��� �����Ƿ� A�� ũ�⸸ŭ
		sum += A[i] * B[i]; // A�� B�� i��° ���Ҹ� ���ؼ� �տ� ������
	}
	return sum; // �� ���
}