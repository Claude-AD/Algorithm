#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	string num; // ������ ��
	cin >> num; // ����ڷκ��� �Է¹���

	sort(num.begin(), num.end(), greater<char>()); // ������������ num ����

	cout << num << endl; // ���ĵ� num ���
	return 0;
}