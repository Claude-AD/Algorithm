#include "Calculate.h"
#include <iostream>
using namespace std;

int main() {
    while(1) {
        int num1, num2;
        char oper;
        cout << "두 정수와 연산자를 입력하세요>>";
        cin >> num1 >> num2 >> oper;
        
        switch (oper) {
            case '+':
                Add a;
                a.setValue(num1, num2);
                cout << a.calculate() << endl;
                break;
                
            case '-':
                Sub s;
                s.setValue(num1, num2);
                cout << s.calculate() << endl;
                break;
                
            case '*':
                Mul m;
                m.setValue(num1, num2);
                cout << m.calculate() << endl;
                break;
                
            case '/':
                Div d;
                d.setValue(num1, num2);
                cout << d.calculate() << endl;
                break;
                
            default:
                cout << "Operator Error!" << endl;
                break;
        }
    }
    return 0;
}
