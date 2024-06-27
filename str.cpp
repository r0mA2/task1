#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Введите строку: ";
    cin >> str;

    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    cout << "Длина строки: " << length << endl;

    return 0;
}