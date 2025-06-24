//
// Created by Akmaljon Toshbotirov on 24/06/25.
//
// #include <iostream>
// using namespace std;
//
// bool is_mirrored(const int* a, const int* b, int size) {
//     const int* pa = a;
//     const int* pb = b + size - 1;
//
//     for (int i = 0; i < size; i++) {
//         if (*pa != *pb)
//             return false;
//         pa++;
//         pb--;
//     }
//     return true;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     int a[n], b[n];
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];
//     cout << is_mirrored(a, b, n) << endl;
//     return 0;
// }
