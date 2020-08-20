#include <iostream>
using namespace std;

int main()
{
	string word; // 알파벳 대소문자로 이루어진 단어
	cin >> word; // 사용자로부터 입력받음

	int alphabet[26] = { 0 }; // 알파벳 별로 얼마나 쓰였는지 count하기 위한 정수배열
	for (int i = 0; i < word.size(); i++) { // 대문자와 소문자를 구분하지 않으므로
		if(islower(word[i])) // 단어의 철자 중 소문자를
			word[i] = toupper(word[i]); // 대문자로 교환 (출력 시 대문자로 출력해야하므로)

		alphabet[word[i] - 'A']++; // 쓰인 알파벳 count를 1 올려준다 
	}

	int most_used_idx = 0; // 가장 많이 쓰인 알파벳에 해당하는 alphabet배열의 인덱스, 초기값 0
	char most_used_alpha = 'A'; // 가장 많이 쓰인 알파벳, 초기값 A

	int max = alphabet[0]; // 가장 많이 쓰인 알파벳을 탐색하기 위한 max 변수, 초기값 alphabet[0]
	for (int i = 1; i < 26; i++) { // 가장 많이 쓰인 알파벳 탐색
		if (alphabet[i] > max) {
			max = alphabet[i];
			most_used_idx = i;
			most_used_alpha = i + 'A';
		}
	}
	for (int i = 0; i < 26; i++) {
		if (i == most_used_idx) // 가장 많이 쓰인 알파벳을 제외하고
			continue;
		else if (max == alphabet[i]) { // 다른 알파벳 중 똑같은 수만큼 쓰인 알파벳이 있다면
			cout << "?" << endl; // ? 출력
			return 0; // main함수 종료
		}
	}
	cout << most_used_alpha << endl; // 그렇지 않다면 가장 많이 쓰인 알파벳 출력
	return 0; // main함수 종료
}