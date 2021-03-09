#include <iostream>
using namespace std;

void printResult(int num1, int num2, char oper, int result) {
    cout << num1 << " " << oper << " " << num2 << " "
    << "=" << " " << result << endl;
}

int main() {
    while(1) {
        int num1, num2;
        char oper;
        
        cout << "? ";
        cin >> num1 >> oper >> num2;
        
        int result = 0;
        
        switch (oper) {
            case '+':
                result = num1 + num2;
                break;
                
            case '-':
                result = num1 - num2;
                break;
                
            case '*':
                result = num1 * num2;
                break;
                
            case '/':
                result = num1 / num2;
                break;
                
            case '%':
                result = num1 % num2;
                break;
                
            default:
                cout << "Operator Error!\n";
                break;
        }
        printResult(num1, num2, oper, result);
    }
    return 0;
}
