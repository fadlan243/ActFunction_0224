#include <iostream>
using namespace std;

void input(float &d1, float &d2) {
    cout << "Masukkan diagonal 1: ";
    cin >> d1;
    cout << "Masukkan diagonal 2: ";
    cin >> d2;
}

float hitungLuas(float d1, float d2) {
    return 1/2 * d1 * d2;
}

