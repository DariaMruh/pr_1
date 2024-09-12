#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // Налаштування кольору консолі та кодування для підтримки кирилиці
    system("color B6");
    SetConsoleCP(1251); // Встановлення кодування введення (Windows-1251)
    SetConsoleOutputCP(1251); // Встановлення кодування виведення (Windows-1251)

    // Змінні для збереження даних користувача
    string last_name;
    string first_name;
    int age;
    string city;

    // Запит даних у користувача
    cout << "Введіть прізвище: ";
    getline(cin, last_name);

    cout << "Введіть ім'я: ";
    getline(cin, first_name);

    cout << "Введіть вік: ";
    cin >> age;
    cin.ignore(); // Очищення буфера після введення числа

    cout << "Введіть місце проживання: ";
    getline(cin, city);

    // Вивід введених даних
    cout << "\nМене звати " << first_name << " " << last_name << "." << endl;
    cout << "Мені " << age << " років." << endl;
    cout << "Я живу в " << city << "." << endl;

    return 0;
}