#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_case; // test case의 개수
	cin >> test_case; // 사용자로부터 입력받음
	
	int dataset_num = 1; // 출력 시 사용할 dataset의 번호
	while (test_case--) { // test case 한 개당
		int idx; // 삭제할 글자의 index
		string word; // single word
		cin >> idx >> word; // index와 single word를 사용자로부터 입력받음

		word.erase(idx - 1, 1); // 입력받은 index의 한 글자를 지움

		cout << dataset_num++ << " " << word << endl; // 결과 출력
	}
	return 0;
}