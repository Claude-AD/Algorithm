#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Date birth(1998, 11, 1);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ','
    << birth.getDay() << endl;
    
    return 0;
}

