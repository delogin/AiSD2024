#include <iostream>
#include <string>
#include "findmatch.h" // Подключение заголовочного файла

using namespace std;

int main() {
    string str1, str2;

    // Ввод строк
    cout << "Введите первую строку: ";
    getline(cin, str1);
    cout << "Введите вторую строку: ";
    getline(cin, str2);

    // Поиск подстроки
    int result = findMatch(str1.c_str(), str2.c_str());
    if (result != -1) {
        cout << "Подстрока найдена на позиции: " << result << endl;
    } else {
        cout << "Подстрока не найдена." << endl;
    }

    return 0;
}
