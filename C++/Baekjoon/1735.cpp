#include <iostream>
using namespace std;

// ����, �и� �ִ������� �������ָ� ���м��� �ǹǷ� �ִ������� ���ϴ� �Լ� ����
int gcd(int a, int b); // �ִ������� ���ϴ� �Լ�

int main()
{
	int fraction_A[2], fraction_B[2], fraction_result[2]; // �м� A, B �׸��� A�� B�� ���� �м�
	cin >> fraction_A[0] >> fraction_A[1] >> fraction_B[0] >> fraction_B[1]; // A�� B�� ����ڷκ��� ����, �и� ������� �Է¹���

	// �м� A, B���� ���ϴ� ����
	fraction_result[1] = fraction_A[1] * fraction_B[1]; // �и�� A�и� * B�и�
	fraction_result[0] = fraction_A[0] * fraction_B[1] + fraction_A[1] * fraction_B[0]; // ���ڴ� A���� * B�и� + A�и� * B����

	int num = gcd(fraction_result[0], fraction_result[1]); // A�� B�� ���� �м��� �и�� ������ �ִ�����
	fraction_result[0] /= num; // ���ڸ� �ִ������� ��������
	fraction_result[1] /= num; // �и� �ִ������� ��������

	cout << fraction_result[0] << " " << fraction_result[1] << endl; // ����, �и� ������� ���
	return 0;
}

/*
��Ŭ���� ȣ�����̶�?
2���� �ڿ���(�Ǵ� ����) a, b�� ���ؼ� a�� b�� ���� �������� r�̶� �ϸ�(��, a>b), a�� b�� �ִ������� b�� r�� �ִ������� ����.
�� ������ ����, b�� r�� ���� ������ r'�� ���ϰ�, �ٽ� r�� r'�� ���� �������� ���ϴ� ������ �ݺ��Ͽ� �������� 0�� �Ǿ��� �� ������ ���� a�� b�� �ִ������̴�.
*/

int gcd(int a, int b) { // ��Ŭ���� ȣ�������� �ִ������� ����
	while (b != 0) {
		int r = a % b; 
		a = b;
		b = r;
	}
	return a;
}