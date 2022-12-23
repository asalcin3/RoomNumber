#include "RoomNumber.h"
#include <iostream>
using namespace std;

void test(int expected, int actual, string testName) {
    if (expected == actual) {
        cout << testName << " PASSED " << endl;
    }
    else {
        cout << testName << "FAILED" << endl;
        cout << "Expected" << expected << " but was " << actual << endl;
    }
}
void testRoomNumber122() {
    RoomNumber rn;
    test(2, rn.numberOfSets(122), "Testing if number of sets is equal 2 when roomNumber input is 122");
}

void testRoomNumber9999() {
    RoomNumber rn;
    test(2, rn.numberOfSets(9999), "Testing if number of sets is equal 2 when roomNumber input is 9999");
}

void testRoomNumber12635() {
    RoomNumber rn;
    test(1, rn.numberOfSets(12635), "Testing if number of sets is equal 1 when roomNumber input is 12635");
}

void testRoomNumber888888() {
    RoomNumber rn;
    test(6, rn.numberOfSets(888888), "Testing if number of sets is equal 6 when roomNumber input is 888888");
}

void testRoomNumberInvalidInput() {
    RoomNumber rn;
    test(0, rn.numberOfSets(-1), "Testing when roomNumber input is not in range [1,1000000], function should return 0.");
}


int main(int argc, char *argv[]) {
    testRoomNumber122();
    testRoomNumber9999();
    testRoomNumber12635();
    testRoomNumber888888();
    testRoomNumberInvalidInput();
    return 0;
}