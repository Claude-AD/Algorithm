#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num; // �Է��� ������ ����
	cin >> num; // ����ڷκ��� �Է¹���

	int* arr = new int[num]; // ����ڷκ��� �Է¹��� ������ŭ �����迭 �����Ҵ�
	for (int i = 0; i < num; i++) { // ����ڷκ��� �����迭 ���� �Է¹���
		cin >> arr[i];
	}

	sort(arr, arr + num); // ������������ ����
	for (int i = 0; i < num; i++) { // �� �ٿ� �ϳ��� ���ĵ� ���� ���
		cout << arr[i] << endl;
	}

	delete[] arr; // �����Ҵ� ����
	return 0;
}