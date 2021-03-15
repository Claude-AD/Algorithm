#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "이름과 전화 번호를 입력해주세요\n";
    Person people[3];
    for(int i = 0; i < 3; i++) {
        string name;
        string tel;
        cout << "사람 " << i + 1 << ">> ";
        cin >> name >> tel;
        people[i].set(name, tel);
    }
    
    cout << "모든 사람의 이름은 ";
    for(int i = 0; i < 3; i++)
    cout << people[i].getName() << ' ';
    
    cout << "\n전화번호 검색합니다. 이름을 입력하세요>>";
    string searchName;
    cin >> searchName;
    for(int i = 0; i < 3; i++) {
        if(searchName == people[i].getName()) {
            cout << "전화 번호는 " << people[i].getTel() << endl;
        }
    }
    return 0;
}
