#include <iostream>
using namespace std;

int main() {
    int number;

    
    cout << "Nhap vao mot so nguyen: ";
    cin >> number;

    
    if (number % 3 == 0 && number % 5 == 0) {
    cout << number << " chia het cho cho 3 và 5." << endl;
    } else if (number % 3 == 0) {
    cout << number << " chia het cho 3." << endl;
    } else if (number % 5 == 0) {
    cout << number << " chia het cho 5." << endl;
    } else {
    cout << number << " khong chia het cho 3 hoac 5." << endl;
    }

    return 0;
}

