//
// Created by Akmaljon Toshbotirov on 26/06/25.
//
// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main() {
//     vector<int> v;
//     int num;
//     while (true) {
//         cin >> num;
//         if (num == 0) break;
//         v.push_back(num);
//     }
//     if (!v.empty()) {
//         cout << "Front: " << v.front() << endl;
//         cout << "Back: " << v.back() << endl;
//     }
//     for (auto it = v.begin(); it != v.end(); ) {
//         if (*it < 10)
//             it = v.erase(it);
//         else
//             ++it;
//     }
//     if (v.size() >= 1)
//         v.insert(v.begin() + 1, 33);
//     else
//         v.push_back(33);
//             if (v.size() >= 2)
//         v.insert(v.end() - 1, 55);
//     else
//         v.push_back(55);
//     for (int x : v)
//         cout << x << " ";
//
//     return 0;
// }
