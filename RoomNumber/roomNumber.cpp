#include "RoomNumber.h"
#include <cmath>
#include <iostream>
using namespace std;

int RoomNumber :: numberOfSets(int roomNumber) {
    if (roomNumber < 1 || roomNumber > 1000000) {
        cout << "Invalid room number."<<endl;
        return 0;
    }
    else {
        int digits[10] = { 0 };
        while (roomNumber != 0) {
            digits[roomNumber % 10]++;
            roomNumber /= 10;
        }
        int result = ceil((digits[6] + digits[9]) / 2.0);
        for (int i = 0; i < 10; i++) {
            if (i == 6 || i == 9)
                continue;
            result = max(result, digits[i]);
        }
        return result;
    }
 
}