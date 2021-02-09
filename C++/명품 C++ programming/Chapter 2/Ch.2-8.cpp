#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;        // 각각의 이름을 저장할 string
    string name_arr[5]; // 5명의 이름을 저장할 배열
    cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n>>";
    
    for (int i = 0; i < 5; i++) {
        getline(cin, name, ';');    // ';'로 구분하여 이름 입력받음
        cout << i+1 << " : " << name << "\n";
        name_arr[i] = name; // 배열에 각각의 이름 저장
    }
    
    string max_length_name = name_arr[0];   // 가장 긴 이름을 처음 입력받은 이름으로 초기화
    for (int i = 1; i < 5; i++) {
        if (name_arr[i].length() >= max_length_name.length()) {
            max_length_name = name; // 이름 배열에 더 긴 이름이 있다면 가장 긴 이름을 교체
        }
    }
    
    cout << "가장 긴 이름은 ";
    
    // 이름 배열에 가장 긴 이름과 길이가 같은 이름이 있는지 검사
    for (int i = 0; i < 5; i++) {
        if (name_arr[i].length() == max_length_name.length()) {
            cout << name_arr[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}
