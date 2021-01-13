#include <iostream>
#include <string>
using namespace std;

int main() {
	int test_case_number = 1; // �� ��° test_case���� ��Ÿ��
	int test_case; // test_case ����
	cin >> test_case;

	cout << fixed; 
	cout.precision(4); // �Ҽ��� �Ʒ� ��°�ڸ����� ǥ��

	for (int i = 0; i < test_case; i++) {
		double data_to_convert; // ��ȯ�� ������
		string data_type; // kg or lb or l or g
		cin >> data_to_convert >> data_type;

		cout << test_case_number++ << " "; // �� ��° test_case���� ���
		if (data_type == "kg") { // kg -> lb
			cout << data_to_convert * 2.2046 << " " << "lb" << endl;
		}
		else if (data_type == "lb") { // lb -> kg
			cout << data_to_convert * 0.4536 << " " << "kg" << endl;
		}
		else if (data_type == "l") { // l -> g
			cout << data_to_convert * 0.2642 << " " << "g" << endl;
		}
		else if (data_type == "g") { // g -> l
			cout << data_to_convert * 3.7854 << " " << "l" << endl;
		}
		else { // 4���� type���� ����� ����� ���
			cout << "Type error!!" << endl;
		}
	}
	return 0;
}