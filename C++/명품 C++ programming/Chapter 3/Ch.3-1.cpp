#include <iostream>
using namespace std;

class Tower {
    int height;
    
public:
    Tower() : height(1) { }  // Constructor without a parameter
    Tower(int h) : height(h) { }  // Constructor that has a parameter
    int getHeight() { return height; }  // Function which returns height
};

int main() {
    Tower myTower;  // 1 meter
    Tower seoulTower(100);  // 100 meter
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
    
    return 0;
}
