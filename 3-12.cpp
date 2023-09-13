#include <iostream>

#include "3-12.h"

using namespace std;

int main() {

    int month, day, year;

    Date date1{13, 31, 2000};

    cout << date1.getDay() << " / " << date1.getMonth() << " / " << date1.getYear() << endl;
} 
