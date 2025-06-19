//
// Created by Akmaljon Toshbotirov on 19/06/25.
//
// #include <iostream>
// using namespace std;
//
// void printDigitWord(int digit) {
//     if (digit == 0) cout << "zero ";
//     else if (digit == 1) cout << "one ";
//     else if (digit == 2) cout << "two ";
//     else if (digit == 3) cout << "three ";
//     else if (digit == 4) cout << "four ";
//     else if (digit == 5) cout << "five ";
//     else if (digit == 6) cout << "six ";
//     else if (digit == 7) cout << "seven ";
//     else if (digit == 8) cout << "eight ";
//     else if (digit == 9) cout << "nine ";
// }
//
// void numberToWords(int number) {
//     if (number == 0) {
//         printDigitWord(0);
//         return;
//     }
//
//
//     int reversed = 0;
//     int temp = number;
//     while (temp > 0) {
//         reversed = reversed * 10 + temp % 10;
//         temp /= 10;
//     }
//
//
//     while (reversed > 0) {
//         int digit = reversed % 10;
//         printDigitWord(digit);
//         reversed /= 10;
//     }
//
//
//     int check = number;
//     while (check % 10 == 0 && check != 0) {
//         printDigitWord(0);
//         check /= 10;
//     }
// }
//
// int main() {
//     int num;
//     cin >> num;
//     numberToWords(num);
//     return 0;
// }

