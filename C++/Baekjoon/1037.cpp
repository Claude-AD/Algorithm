#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int number_of_divisor; // '��¥'����� ����	 
	cin >> number_of_divisor; // ����ڷκ��� �Է¹���

	int* divisor_arr = new int[number_of_divisor]; // '��¥'����� ���� �迭�� �����迭�� ����
	for (int i = 0; i < number_of_divisor; i++) // '��¥'����� ����ڷκ��� �Է¹���
		cin >> divisor_arr[i];

	sort(divisor_arr, divisor_arr + number_of_divisor); // '��¥'����� ũ������� ����

	/* sort�Լ��� ������� �ʰ� ���� ������ �迭 ����
	for (int i = 0; i < number_of_divisor; i++) {
		for (int j = 0; j < number_of_divisor - 1; j++) {
			if (divisor_arr[j] > divisor_arr[j + 1]) {
				int temp = divisor_arr[j];
				divisor_arr[j] = divisor_arr[j + 1];
				divisor_arr[j + 1] = temp;
			}
		}
	}
	*/

	cout << divisor_arr[0] * divisor_arr[number_of_divisor - 1] << endl; // N�� ��� �� �ΰ��� ¦�� ���� ���ϸ� N�� �Ǵ� ������ �̿�
																		 // ũ������� ������ '��¥'��� �� ���� ���� ����� ���� ū ����� ���Ͽ� ���
	
	delete[] divisor_arr; // �����Ҵ� ����
	return 0;
}