#include <iostream>
#include <string>
using namespace std;

int main() {
	int test_case_number = 1; // 몇 번째 test_case인지 나타냄
	int test_case; // test_case 개수
	cin >> test_case;

	cout << fixed; 
	cout.precision(4); // 소수점 아래 넷째자리까지 표현

	for (int i = 0; i < test_case; i++) {
		double data_to_convert; // 변환할 데이터
		string data_type; // kg or lb or l or g
		cin >> data_to_convert >> data_type;

		cout << test_case_number++ << " "; // 몇 번째 test_case인지 출력
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
		else { // 4가지 type에서 벗어나면 경고문구 출력
			cout << "Type error!!" << endl;
		}
	}
	return 0;
}