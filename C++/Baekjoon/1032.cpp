#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int file_name_num; // 입력할 파일 이름 개수
	cin >> file_name_num; // 사용자로부터 입력받음

	vector<string> file_name; // 파일 이름 벡터를 생성
	for(int i = 0; i < file_name_num; i++) { // 입력한 파일 이름 개수만큼 
		string file;
		cin >> file; // 사용자로부터 파일 이름 입력받고
		file_name.push_back(file); // 파일 이름 벡터에 push_back
	}

	string pattern = file_name[0]; // 명령프롬프트에 출력할 패턴, 초기값은 첫번째 파일이름
	for (int i = 1; i < file_name_num; i++) { // 모든 파일 이름 벡터 원소에 대하여
		for (int j = 0; j < file_name[0].size(); j++) { // 모든 파일 이름은 길이가 같으므로 처음 파일 이름의 철자 수 만큼
			if (pattern[j] != file_name[i][j]) // 패턴과 파일 이름의 철자가 다르다면
				pattern[j] = '?'; // 패턴에 ? 입력
		}
	}
	cout << pattern << endl; // 패턴 출력
	return 0;
}